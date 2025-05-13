# Import the function to create the graphical user interface (GUI)
from gui_utils import create_gui

# Entry point of the application
if __name__ == "__main__":
    # Create the GUI and retrieve the root window and result label
    root, result_label = create_gui()
    
    # Start the main event loop of the GUI
    root.mainloop()
