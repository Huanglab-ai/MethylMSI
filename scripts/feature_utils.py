import os
import sys

def load_feature_names(model_mode):
    try:
        # Determine the base directory (use _MEIPASS if running as a PyInstaller bundle)
        base_dir = getattr(sys, '_MEIPASS', os.getcwd())

        # Get the path to the "data" folder
        resources_dir = os.path.join(base_dir, "data")
        
        # Dynamically construct the file path based on the selected mode
        if model_mode == 'coad':
            file_path = os.path.join(resources_dir, 'feature_names_coad.csv')
        elif model_mode == 'stad':
            file_path = os.path.join(resources_dir, 'feature_names_stad.csv')
        elif model_mode == 'ucec':
            file_path = os.path.join(resources_dir, 'feature_names_ucec.csv')
        else:
            return []

        # Read the content of the file
        with open(file_path, 'r') as f:
            return [line.strip() for line in f.readlines()]
    except FileNotFoundError:
        print(f"The feature names file 'feature_names_{model_mode}.csv' was not found. Please ensure the file exists.")
        return []