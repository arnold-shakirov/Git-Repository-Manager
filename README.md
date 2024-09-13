# Git Repository Manager

## Overview
This C++ project implements a basic Git repository management system that allows users to interact with a simulated repository. The system is composed of several core files responsible for handling repository operations, committing changes, and managing branches. 

## Features
- **Repository Management**: Simulate a Git repository where users can perform actions such as adding files, committing changes, and viewing repository status.
- **Branch Management**: Handle multiple branches and commit history.
- **Command-line Interface**: Provides interaction with the repository via command-line input.

## Project Structure
- **`gitrepo.cpp`**: Contains the implementation of the Git repository management functions, such as creating commits, managing branches, and simulating Git commands.
- **`gitrepo.h`**: Header file that declares the functions and structures for the repository.
- **`main.cpp`**: The main entry point for the application, where user inputs are processed, and the repository operations are executed.

## How to Build and Run

### Prerequisites
- **C++ Compiler**: Ensure that you have a C++ compiler (such as `g++`) installed on your system.

### Building the Project
1. Clone the repository:


2. Navigate to the project directory:


3. Compile the source files:
    ```bash
    g++ -o git_repo_manager main.cpp gitrepo.cpp
    ```

### Example Commands
Add Files: Simulates adding files to the repository.
Commit Changes: Commits the current changes to the repository.
Branch Management: Switch or create new branches.
View Status: Displays the current repository status, including branches and commits.

### Requirements
C++17 or higher.

### Contact
For any questions or suggestions, feel free to reach out to me at [ashakirov@stetson.edu].
