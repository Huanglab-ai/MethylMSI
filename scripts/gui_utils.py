import tkinter as tk
from tkinter import ttk, filedialog
import tkinter.font as tkfont
import shutil
import os
import sys

def select_file(file_label, selected_file):
    """
    Open a file dialog to select a file and update the label and variable.

    Args:
        file_label (tk.Label): Label to display the selected file path.
        selected_file (tk.StringVar): Variable to store the selected file path.
    """
    file_path = filedialog.askopenfilename(filetypes=[("CSV Files", "*.csv")])
    if file_path:
        file_label.config(text=f"Selected file: {file_path}")
        selected_file.set(file_path)

def run_prediction(file_path, model_mode, result_label):
    """
    Run the prediction process using the selected file and mode.

    Args:
        file_path (str): Path to the input file.
        model_mode (str): Selected model mode (e.g., 'coad', 'stad', 'ucec').
        result_label (tk.Label): Label to display the prediction results.
    """
    from model_utils import predict
    if file_path and model_mode:
        predict(file_path, model_mode, result_label)
    else:
        result_label.config(text="Please select a file and mode.")

def center_window(root, width, height):
    """
    Center the application window on the screen.

    Args:
        root (tk.Tk): The root window.
        width (int): Width of the window.
        height (int): Height of the window.
    """
    screen_width = root.winfo_screenwidth()
    screen_height = root.winfo_screenheight()
    x = (screen_width - width) // 2
    y = (screen_height - height) // 2
    root.geometry(f"{width}x{height}+{x}+{y}")

def download_example_file(result_label):
    """
    Copy the example file from the local resources folder to a user-selected directory.

    Args:
        result_label (tk.Label): Label to display the download status.
    """
    # Get the absolute path of the example.csv file
    base_dir = getattr(sys, '_MEIPASS', os.getcwd())
    source_file = os.path.join(base_dir, "data", "example.csv")
    if os.path.exists(source_file):
        # Open a dialog to select the target directory
        target_directory = filedialog.askdirectory()
        if target_directory:
            try:
                # Construct the target file path
                target_file = os.path.join(target_directory, "example.csv")
                shutil.copy2(source_file, target_file)
                result_label.config(text=f"File downloaded successfully: {target_file}")
            except Exception as e:
                result_label.config(text=f"File download failed: {str(e)}")
        else:
            result_label.config(text="No target directory selected.")
    else:
        result_label.config(text="Example file does not exist.")

def create_gui():
    """
    Create the graphical user interface (GUI) for file upload and model prediction.

    Returns:
        root (tk.Tk): The root window of the GUI.
        result_label (tk.Label): Label to display the results.
    """
    root = tk.Tk()
    root.title("File Upload and Model Prediction")
    root.configure(bg="#f0f0f0")  # Set background color

    # Set the window size and center it on the screen
    center_window(root, 600, 500)

    # Variables to store the selected file path, mode, and reference file path
    selected_file = tk.StringVar()
    mode_var = tk.StringVar()
    reference_file = tk.StringVar()

    # Set fonts
    title_font = tkfont.Font(family="Helvetica", size=16, weight="bold")
    label_font = tkfont.Font(family="Helvetica", size=12)
    button_font = tkfont.Font(family="Helvetica", size=12)

    # File selection button
    file_button = ttk.Button(root, text="Select File", command=lambda: select_file(file_label, selected_file))
    file_button.pack(pady=20)

    # Label to display the selected file path
    file_label = tk.Label(root, text="No file selected", bg="#f0f0f0", font=label_font)
    file_label.pack(pady=10)

    # Mode selection
    mode_frame = tk.Frame(root, bg="#f0f0f0")
    mode_frame.pack(pady=10)

    mode_label = tk.Label(mode_frame, text="Select Mode:", bg="#f0f0f0")
    mode_label.pack(side=tk.LEFT)

    mode_a_radio = ttk.Radiobutton(mode_frame, text="Mode coad", variable=mode_var, value='coad')
    mode_a_radio.pack(side=tk.LEFT, padx=5)

    mode_b_radio = ttk.Radiobutton(mode_frame, text="Mode stad", variable=mode_var, value='stad')
    mode_b_radio.pack(side=tk.LEFT, padx=5)

    mode_c_radio = ttk.Radiobutton(mode_frame, text="Mode ucec", variable=mode_var, value='ucec')
    mode_c_radio.pack(side=tk.LEFT, padx=5)

    # Button to download the example file
    download_button = ttk.Button(root, text="Download Example File", command=lambda: download_example_file(result_label))
    download_button.pack(pady=20)

    # Label to display the results
    global result_label
    result_label = tk.Label(root, text="", bg="#f0f0f0", font=label_font)
    result_label.pack(pady=20)

    # Button to run the prediction
    predict_button = ttk.Button(root, text="Run Prediction", command=lambda: run_prediction(selected_file.get(), mode_var.get(), result_label))
    predict_button.pack(pady=20)

    # Configure button styles
    style = ttk.Style()
    style.configure("TButton", font=button_font, background="#4CAF50", foreground="black")
    style.map("TButton", background=[('active', '#45a049')])

    return root, result_label