import os
import pandas as pd
import joblib
import sys
from feature_utils import load_feature_names

def predict(file_path, model_mode, result_label):
    try:
        # Load the input data from the specified file path
        data = pd.read_csv(file_path)

        # Load the feature names corresponding to the selected mode
        feature_names = load_feature_names(model_mode)

        # Filter the columns to match the features used during training
        available_features = [col for col in data.columns if col in feature_names]
        # Rearrange the columns to match the order used during training
        data = data.loc[:, data.columns.isin(available_features)]
        # Handle missing features by filling them with default values
        missing_features = [col for col in feature_names if col not in data.columns]
        for feature in missing_features:
            data[feature] = 0  # Fill missing numerical features with 0
        # Rearrange the columns to match the order used during training
        data = data[feature_names]

        # Check if the filtered data is empty
        if data.empty:
            result_label.config(text="The filtered data is empty. Please check the feature names file and input data.")
            return

        # Determine the base directory for resources
        if hasattr(sys, '_MEIPASS'):
            resources_dir = os.path.join(sys._MEIPASS, "model")
        else:
            resources_dir = os.path.join(os.getcwd(), "model")

        # Load the corresponding model based on the selected mode
        if model_mode == 'coad':
            model_path = os.path.join(resources_dir, 'svm_model_coad.pkl')
        elif model_mode == 'stad':
            model_path = os.path.join(resources_dir, 'svm_model_stad.pkl')
        elif model_mode == 'ucec':
            model_path = os.path.join(resources_dir, 'svm_model_ucec.pkl')
        else:
            result_label.config(text="Invalid mode selected.")
            return

        # Load the model
        model = joblib.load(model_path)

        # Perform predictions
        predictions = model.predict(data)

        # Convert prediction results to human-readable format
        converted_predictions = []
        for pred in predictions:
            if pred == 1:
                converted_predictions.append('MSS')
            elif pred == 0:
                converted_predictions.append('MSI')
            else:
                converted_predictions.append(str(pred))

        # Display the prediction results
        result_text = "\n".join(converted_predictions)
        result_label.config(text=f"Prediction Results:\n{result_text}")
    except Exception as e:
        # Handle any errors that occur during the prediction process
        result_label.config(text=f"An error occurred: {str(e)}")