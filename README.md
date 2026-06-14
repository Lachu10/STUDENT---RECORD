Student Record Management System
This is a command-line student record management application written in C. It uses a singly linked list data structure to manage student records dynamically in memory, with flat-file persistence to save and load data from disk.
The system supports standard database operations including creating, reading, updating, deleting, sorting, and reversing student records.
---
## Features
- **Dynamic Memory Allocation**: Records are stored as nodes in a singly linked list, which grows and shrinks dynamically using heap memory.
- **File Persistence**: Automatic loading of records from student.dat at startup and manual saving of records back to disk.
- **Sorting**: Organizes the linked list of students based on criteria like roll number or percentage.
- **Reversing**: Utility to reverse the current order of the student list.
- **Memory Safety**: Clean exit routine that frees all allocated memory blocks to prevent leaks.
---
## File Structure
The project code is modularized into several dedicated files:
- **student.h**: Defines the Student struct (containing roll number, name, and percentage) and declares all function prototypes and the shared head pointer.
- **main.c**: Main program entry point containing the loop that handles the menu user interface.
- **add.c**: Logic for prompting the user for new details and appending a new record to the list.
- **delete.c**: Handles searching for a specific record by roll number and unlinking it from the linked list.
- **delall.c**: Utility function that traverses the linked list and frees all allocated node memory.
- **show.c**: Prints all student records currently in memory in a structured format.
- **modify.c**: Locates a student record and lets the user update their details.
- **sort.c**: Orders the records in memory.
- **reverse.c**: Reverses the links of the list in-place.
- **save.c**: Serializes the linked list into student.dat in plain-text format.
- **load.c**: Deserializes records from student.dat on program startup.
- **exit.c**: Saves progress and clears memory before terminating the process safely.
- **Makefile**: Defines rules for compiling all modules into the final executable.
---
## Compilation and Execution
### Build Using Make
Run the make command in your shell to compile all files into an executable named `outfile`:
```bash
make
```
### Run the Program
After building, execute the program by running:
```bash
./outfile
```
---
## User Menu Options
When running the application, you will be presented with a menu. Enter the corresponding letter to perform an action:
- **A or a**: Add a new student record (prompts for roll number, name, and percentage).
- **D or d**: Delete a specific student record by roll number.
- **S or s**: Show the list of all students currently in memory.
- **M or m**: Modify an existing student's details.
- **V or v**: Save all current records in memory to the student.dat database.
- **T or t**: Sort the list of students.
- **R or r**: Reverse the order of the student list.
- **E or e**: Safe exit (frees memory and exits).
Creating
