from flask import Flask, render_template, jsonify, request
import cv2
import numpy as np
import base64
from keras.models import load_model
from PIL import Image, ImageOps
import os

app = Flask(__name__)

# Define global variables to store RFID and image classification data
rfid_data = "Unauthorized"
confidence_score = 0.99
semantic_count = 0
instance_count = 0

# Define the path to the labels file
labels_file_path = "C:/Users/user/Desktop/IOT/converted_keras/labels.txt"

# Check if the labels file exists before reading it
if os.path.exists(labels_file_path):
    # Load the model and labels
    model = load_model("C:/Users/user/Desktop/IOT/converted_keras/keras_model.h5", compile=False)
    class_names = open(labels_file_path, "r").readlines()
else:
    print(f"Error: The file '{labels_file_path}' does not exist.")

# Function to load and preprocess the image for classification
def load_and_preprocess_image(image_path):
    image = Image.open(image_path).convert("RGB")
    size = (224, 224)
    image = ImageOps.fit(image, size, Image.Resampling.LANCZOS)
    image_array = np.asarray(image)
    normalized_image_array = (image_array.astype(np.float32) / 127.5) - 1
    data = np.ndarray(shape=(1, 224, 224, 3), dtype=np.float32)
    data[0] = normalized_image_array
    return data

# Function to load an image
def load_image(image_path):
    img = cv2.imread(image_path)
    if img is None:
        print(f"Error: Unable to load image from {image_path}")
        return None
    return img

# Function to convert image to base64 encoding
def convert_image_to_base64(image):
    _, buffer = cv2.imencode('.jpg', image)
    jpg_as_text = base64.b64encode(buffer).decode('utf-8')
    return jpg_as_text

# Function to perform object counting on semantic segmentation images
def count_semantic_objects(semantic_images):
    total_objects = []
    for img in semantic_images:
        unique_labels = np.unique(img)
        total_objects.append(len(unique_labels))
    return total_objects

# Function to perform object counting on instance segmentation images
def count_instance_objects(instance_images):
    total_objects = []
    for img in instance_images:
        unique_ids = np.unique(img)
        # Exclude background label (ID 0)
        total_objects.append(len(unique_ids) - 1)
    return total_objects

# Route to handle image classification data sent by NodeMCU
@app.route('/image_data', methods=['POST'])
def handle_image_data():
    print("Received POST request at /image_data")
    global confidence_score

    # Load and preprocess the image
    image_path = "C:/Users/user/Desktop/IOT/Newvideos/00000/frame_0.jpg"
    image = Image.open(image_path).convert("RGB")
    size = (224, 224)
    image = ImageOps.fit(image, size, Image.Resampling.LANCZOS)
    image_array = np.asarray(image)
    normalized_image_array = (image_array.astype(np.float32) / 127.5) - 1
    data = np.ndarray(shape=(1, 224, 224, 3), dtype=np.float32)
    data[0] = normalized_image_array

    # Make predictions
    prediction = model.predict(data)
    index = np.argmax(prediction)
    class_name = class_names[index]
    confidence_score = float(prediction[0][index])

    # Print prediction and confidence score
    print("Predicted Class:", class_name[2:])
    print("Confidence Score:", confidence_score)

    return 'Image data processed successfully'


# Route to fetch confidence score
@app.route('/confidence_score', methods=['GET'])
def get_confidence_score():
    global confidence_score
    return jsonify({'confidence_score': confidence_score})

# Route to handle RFID data
@app.route('/rfid_data', methods=['POST'])
def handle_rfid_data():
    global rfid_data
    rfid_data = request.form['rfid_data']
    return 'RFID data received successfully'

# Route to display dashboard
@app.route('/')
def home():
    global semantic_count, instance_count
    # Call counting functions and store results
    semantic_counts = count_semantic_objects([load_image("C:/Users/user/Desktop/IOT/image6i.png")])
    instance_counts = count_instance_objects([load_image("C:/Users/user/Desktop/IOT/image6s.png")])
    # Update global variables with counting results
    semantic_count = semantic_counts[0]
    instance_count = instance_counts[0]
    # Convert image to base64 encoding
    image_path = "C:/Users/user/Desktop/IOT/frame_0.jpg"  # Change this to your image path
    image = load_image(image_path)
    image_data = convert_image_to_base64(image)
    # Print counting results in the terminal
    print("Total Objects (Semantic Segmentation):", semantic_count)
    print("Total Objects (Instance Segmentation):", instance_count)
    return render_template('dashboard.html', semantic_count=semantic_count, instance_count=instance_count, confidence_score=confidence_score, rfid_data=rfid_data, image_data=image_data)

if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5000, debug=True)
