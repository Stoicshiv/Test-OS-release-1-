# Lightweight OS on Arduino Uno

## Overview
This project aims to create a lightweight operating system for the Arduino Uno board, capable of executing basic CPU-like operations. The OS leverages the serial monitor for input/output operations and is designed for extreme minimalism. By simulating an ultra-lightweight CPU, this project allows users to perform specific operations such as arithmetic calculations, data processing, and simple command handling.

## Features
- **Terminal-like Interface**: The system uses the Serial Monitor as a command-line interface.
- **Basic Operations**: Support for arithmetic calculations (addition, subtraction, multiplication, division).
- **Custom Commands**: Ability to add custom commands for specific tasks.
- **Highly Lightweight**: Designed to run on the limited resources of the Arduino Uno.
- **Extensible**: Open-source and modifiable to meet specific needs.

## Hardware Requirements
- **Arduino Uno Board**
- USB cable for power and serial communication
- Computer with Arduino IDE installed

## Software Requirements
- Arduino IDE (latest version recommended)
- C++ programming knowledge for extending functionality

## Getting Started
### Steps to Run the OS
1. **Set up the Hardware:**
   - Connect the Arduino Uno to your computer using the USB cable.

2. **Install the Arduino IDE:**
   - Download and install the Arduino IDE from the [official website](https://www.arduino.cc/en/software).

3. **Upload the Code:**
   - Open the Arduino IDE and copy the OS code into a new sketch.
   - Select the correct board and port under **Tools**.
   - Upload the sketch to the Arduino Uno.

4. **Open the Serial Monitor:**
   - After uploading the code, open the Serial Monitor in the Arduino IDE.
   - Set the baud rate to match the one defined in the code (e.g., 9600).

5. **Interact with the OS:**
   - Type commands in the Serial Monitor to perform operations.
   - For example, type `ADD 5 3` to add two numbers.

## Commands
| Command  | Description                      | Example        |
|----------|----------------------------------|----------------|
| `ADD`    | Adds two numbers                | `ADD 5 3`      |
| `SUB`    | Subtracts two numbers           | `SUB 7 2`      |
| `MUL`    | Multiplies two numbers          | `MUL 4 6`      |
| `DIV`    | Divides two numbers             | `DIV 8 2`      |
| `HELP`   | Displays the list of commands   | `HELP`         |

## Code Structure
1. **Initialization:**
   - Sets up the Serial Monitor and initializes the OS.
2. **Command Parsing:**
   - Reads user input and parses commands.
3. **Command Execution:**
   - Executes the specified operation and returns the result.
4. **Output:**
   - Sends the output back to the Serial Monitor.

## Contributing
We welcome contributions to improve and extend this project. Here’s how you can contribute:
- **Add New Features:** Implement additional commands or operations.
- **Optimize Code:** Make the system faster and more efficient.
- **Bug Fixes:** Identify and fix any issues in the existing code.

### How to Contribute
1. Fork the repository.
2. Make your changes.
3. Test the changes thoroughly.
4. Submit a pull request with a detailed explanation of your modifications.

## Limitations
- Limited memory and processing power of the Arduino Uno.
- No persistent storage for data.
- Restricted to basic operations due to hardware constraints.

## Future Enhancements
- Adding support for more complex operations.
- Integrating a small LCD for a graphical interface.
- Providing support for external storage modules.

## License
This project is licensed under the Apache2.0 License. PEople can use, modify, and distribute it.

---

Happy hacking with your lightweight OS on Arduino Uno!

