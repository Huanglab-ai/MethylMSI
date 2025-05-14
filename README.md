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
MethylMSI/
├─README.md    # Help documentation
│
├─models    # Directory for model training 
│  ├─saved
│  │      ├─svm_model_coad.pkl
│  │      ├─svm_model_stad.pkl
│  │      └─svm_model_ucec.pkl
│  │      
│  └─train    # Model training scripts
│          └─main.py   
│          
├─release
│      └─setup.exe    # Packaged installation program
│      
└─scripts    # Directory for original code
    │  ├─feature_utils.py
    │  ├─gui_utils.py
    │  ├─main.py    # Main Python script
    │  └─model_utils.py
    │  
    ├─data
    │      ├─example.csv
    │      ├─feature_names_coad.csv
    │      ├─feature_names_stad.csv
    │      └─feature_names_ucec.csv
    │      
    └─model
            ├─svm_model_coad.pkl
            ├─svm_model_stad.pkl
            └─svm_model_ucec.pkl

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

## Contacts
For support, contact:
- Email: huangmn33@mail.sysu.edu.cn
- Project URL: [https://github.com/Huanglab-ai/MethylMSI](https://github.com/Huanglab-ai/MethylMSI)
