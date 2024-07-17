import json
import os

# Function to parse JSON files and extract unique classes
def extract_classes_from_json(json_files):
    classes = set()
    for file_path in json_files:
        with open(file_path, 'r') as f:
            data = json.load(f)
            for item in data['annotations']:
                classes.add(item['category_id'])
    return classes

# Directory containing the JSON files
json_dir = 'c:/Users/user/Desktop/IOT/infinityai_smartfacility_inventory_basic_v1.0/infinityai_smartfacility_inventory_basic_v1.0/data/'

# List of paths to JSON files for each video
json_files = [os.path.join(json_dir, f) for f in os.listdir(json_dir) if f.endswith('_labels.json')]

# Extract unique classes from JSON files
unique_classes = extract_classes_from_json(json_files)

# Create label map
label_map = {}
for i, class_id in enumerate(unique_classes, start=1):
    label_map[class_id] = i

# Write label map to file
with open('label_map.pbtxt', 'w') as f:
    for class_id, label_id in label_map.items():
        f.write('item {\n')
        f.write(f'  id: {label_id}\n')
        f.write(f'  name: \'{class_id}\'\n')
        f.write('}\n')
