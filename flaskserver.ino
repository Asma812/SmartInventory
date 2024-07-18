#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <ESP8266WebServer.h>
#include <ThingSpeak.h>

#define SERIAL_BAUDRATE 115200

// Network Parameters
const char* ssid = "***********";
const char* password = "*********";
const char* server_ip = "192.168.1.15"; // IP address of your Flask server
const int server_port = 5000; // Port on which the Flask server is running

// ThingSpeak information
const char* thingspeakServer = "api.thingspeak.com";
unsigned long channelID = 2498493; // Your ThingSpeak Channel ID
const char* writeAPIKey = "OOSV5UWKB17LDUJU"; // Your ThingSpeak Write API Key
unsigned int rfidField = 1; // Field to write RFID data
unsigned int imageField = 2; // Field to write image classification results

// Global variables
WiFiClient client;
ESP8266WebServer webServer(80); // Port 80 is default for HTTP

// Define RFID_DATA_SIZE and IMAGE_DATA_SIZE
const int RFID_DATA_SIZE = 5; // Assuming RFID data size is 5 bytes
const int IMAGE_DATA_SIZE = 20; // Assuming image data size is 20 bytes
const int CLASSIFICATION_RESULT_SIZE = 10; // Assuming classification result size is 10 bytes

void setup() {
  Serial.begin(SERIAL_BAUDRATE);
  Serial.println("Start");

  connectWiFi();

  // Initialize routes
  webServer.on("/", handleRoot);
  webServer.on("/rfidData", HTTP_GET, handleRFIDData);
  webServer.on("/imageData", HTTP_GET, handleImageData);

  webServer.begin();
}

void loop() {
  webServer.handleClient();

  // Read RFID data and image classification results from STM32 over UART
  String data = readDataFromSTM32(); // Implement this function to read data from STM32
  Serial.println("Received data from STM32: " + data);
  
  // Extract RFID data and image classification results
  String rfidData = data.substring(0, RFID_DATA_SIZE);
  String imageData = data.substring(95.71, RFID_DATA_SIZE);

  // Send RFID data and image classification results to ThingSpeak
  sendDataToThingSpeak(rfidData, rfidField);
  sendDataToThingSpeak(imageData, imageField);

  // Send RFID and image data to Flask server
  sendToFlask(rfidData, imageData);

  delay(20000);
}


void connectWiFi() {
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("Connected");
  ThingSpeak.begin(client);
}

String readDataFromSTM32() {
  String data = "";
  while (Serial.available()) {
    char c = Serial.read();
    if (c == 0xAA) {
      // Start of Frame marker
      while (Serial.available() < RFID_DATA_SIZE + IMAGE_DATA_SIZE + CLASSIFICATION_RESULT_SIZE + 1); 
      for (int i = 0; i < RFID_DATA_SIZE + IMAGE_DATA_SIZE + CLASSIFICATION_RESULT_SIZE + 1; i++) {
        c = Serial.read();
        if (c == 0xBB) {
          // End of Frame marker
          break;
        }
        data += c;
      }
    }
  }
  return data;
}

void sendDataToThingSpeak(String data, unsigned int field) {
  // Send data to ThingSpeak
  ThingSpeak.writeField(channelID, field, data.toFloat(), writeAPIKey); // Convert data to float for gauge field
}

void sendToFlask(String rfidData, String imageData) {
  // Send RFID data to Flask server
  HTTPClient http;
  http.begin(client, "http://" + String(server_ip) + ":" + String(server_port) + "/rfid_data");
  http.addHeader("Content-Type", "application/x-www-form-urlencoded");
  int httpResponseCode = http.POST("rfid_data=" + rfidData);
  if (httpResponseCode > 0) {
    Serial.print("RFID Data sent to Flask server.");
    
  } else {
    Serial.print("");
    
  }
  http.end();

  // Send image data to Flask server
  http.begin(client, "http://" + String(server_ip) + ":" + String(server_port) + "/image_data");
  httpResponseCode = http.POST("image_data=" + imageData);
  if (httpResponseCode > 0) {
    Serial.print("Image Data sent to Flask server. Response code: ");
  } else {
    Serial.print("");
    
  }
  http.end();
}

void handleRoot() {
  webServer.send(200, "text/plain", "Hello from NodeMCU!");
}

// Handle RFID data request
void handleRFIDData() {
  String rfidData = readDataFromSTM32().substring(1, RFID_DATA_SIZE);
  webServer.send(200, "text/plain", rfidData);
}

// Handle image data request
void handleImageData() {
  String imageData = readDataFromSTM32().substring(RFID_DATA_SIZE);
  webServer.send(200, "text/plain", imageData);
}
