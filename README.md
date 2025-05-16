# MethylMSI Quick Guide

This project is a Python-based tool specialized in the classification of microsatellite instability(MSI) tumors, designed for predicting MSI status from DNA methylation data. It achieves MSI prediction through Support Vector Machine(SVM) model.

## Features

A Python Tkinter-based GUI tool for:
- Selecting CSV files for model prediction
- Supporting three prediction modes: coad, stad, ucec
- Downloading example file (e.g., example.csv)
- Running predictions and displaying results

## Requirements
- Python >= 3.6
- pandas >= 1.0.0
- joblib >= 0.14.0
- tkinter (built-in)
- nuitka (only for packaging)

## Structure
```
MethylMSI/
├─README.md    # Help documentation
│          
├─release    # Distribution package directory
│      └─setup.exe    # Packaged installation program
│      
└─scripts    # Directory for original code
    │  ├─feature_utils.py    # Feature engineering utilities: Data preprocessing and feature selection
    │  ├─gui_utils.py    # GUI utilities: Building visual interfaces
    │  ├─main.py    # Main program entry: Integrates data loading, model prediction, and result output
    │  └─model_utils.py    # Model utilities: Wrapper for model loading and prediction
    │  
    ├─data    # Example data and feature name files
    │      ├─example.csv    # Sample input data file (DNA methylation data format example)
    │      ├─feature_names_coad.csv    # Feature names for COAD dataset (used for feature matching)
    │      ├─feature_names_stad.csv    # Feature names for STAD dataset
    │      └─feature_names_ucec.csv    # Feature names for UCEC dataset
    │      
    └─model    # Runtime model directory
            ├─svm_model_coad.pkl    # COAD model identical to models
            ├─svm_model_stad.pkl    # STAD model identical to models
            └─svm_model_ucec.pkl    # UCEC model identical to models
```

## Installation
1. Double-click the release/setup.exe file and follow the prompts of the installation wizard.
2. After the installation is complete, you can find the project's startup program in the Start menu or the specified installation directory.

## Usage
1. Running the packaged program: Launch the project through the installed shortcut or the executable file in the installation directory, and follow the in - interface instructions.
2. Running the original code(Python environment required):
- Ensure that all Python dependencies required by the project are installed.
- Navigate to the scripts directory and run python main.py in the command line to execute the main program. 

## Steps
1. Click "Select File" to choose a CSV file
2. Select a prediction mode (coad/stad/ucec)
3. (Optional) Download example file (e.g., example.csv)
4. Click "Run Prediction" to see results

## Compatibility
- Development Environment: Windows 10/11 (64-bit)
- Native Support: Windows systems (.exe file requires direct execution on Windows)
- Other Systems: Not officially supported on macOS/Linux. For non-Windows users, consider using the original code.

## Contacts
For support, contact:
- Email: huangmn33@mail.sysu.edu.cn
- Project URL: [https://github.com/Huanglab-ai/MethylMSI](https://github.com/Huanglab-ai/MethylMSI)
