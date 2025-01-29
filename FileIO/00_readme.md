### **File I/O in C++**  
File I/O (Input/Output) in C++ allows programs to read from and write to files using streams. The `<fstream>` header provides the necessary classes and functions to handle file operations.

### **Classes for File Handling**  
1. **`ifstream` (Input File Stream)** – Used for reading data from files.  
2. **`ofstream` (Output File Stream)** – Used for writing data to files.  
3. **`fstream` (File Stream)** – Supports both reading and writing in a single object.

### **File Opening Modes (`ios` Flags)**
- `ios::in` → Open file for reading.  
- `ios::out` → Open file for writing (overwrites existing content).  
- `ios::app` → Append data to the file.  
- `ios::ate` → Open and move to the end of the file.  
- `ios::binary` → Open in binary mode.  
- `ios::trunc` → Truncate file if it exists.

### **Common Member Functions**
#### **For `ofstream` (Writing to a file)**
- `open("filename", mode)` → Opens a file in the specified mode.
- `is_open()` → Checks if the file is successfully opened.
- `write()` → Writes data to the file.
- `close()` → Closes the file.

#### **For `ifstream` (Reading from a file)**
- `open("filename", mode)` → Opens a file in read mode.
- `is_open()` → Checks if the file is successfully opened.
- `getline()` → Reads a line from the file.
- `read()` → Reads data from the file in binary mode.
- `eof()` → Checks if the end of the file is reached.
- `close()` → Closes the file.

#### **For `fstream` (Reading & Writing)**
- `seekg(position)` → Moves the read pointer to a specific position.
- `seekp(position)` → Moves the write pointer to a specific position.
- `tellg()` → Returns the current read pointer position.
- `tellp()` → Returns the current write pointer position.