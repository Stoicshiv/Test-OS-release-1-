// Define constants for the "CPU" simulation
const int memorySize = 10; // Simple memory array
int memory[memorySize] = {0}; // Initialize memory with zeros
int accumulator = 0; // A simulated register for storing intermediate values

void setup() {
  Serial.begin(9600); // Initialize Serial Monitor
  Serial.println("Lightweight CPU Simulator Ready");
  Serial.println("Commands:");
  Serial.println("  LOAD X  - Load memory[X] into accumulator");
  Serial.println("  STORE X - Store accumulator into memory[X]");
  Serial.println("  ADD X   - Add memory[X] to accumulator");
  Serial.println("  SUB X   - Subtract memory[X] from accumulator");
  Serial.println("  MUL X   - Multiply accumulator by memory[X]");
  Serial.println("  DIV X   - Divide accumulator by memory[X]");
  Serial.println("  RESET   - Reset accumulator and memory");
  Serial.println("  SHOW    - Display memory and accumulator");
  Serial.println("Type your command:");
}

void loop() {
  if (Serial.available()) {
    String input = Serial.readStringUntil('\n'); // Read input command
    input.trim(); // Remove any extra spaces or newlines

    if (input.startsWith("LOAD")) {
      int index = getArgument(input);
      if (isValidIndex(index)) {
        accumulator = memory[index];
        Serial.println("Accumulator loaded with value: " + String(accumulator));
      }
    } 
    else if (input.startsWith("STORE")) {
      int index = getArgument(input);
      if (isValidIndex(index)) {
        memory[index] = accumulator;
        Serial.println("Stored accumulator value in memory[" + String(index) + "]");
      }
    } 
    else if (input.startsWith("ADD")) {
      int index = getArgument(input);
      if (isValidIndex(index)) {
        accumulator += memory[index];
        Serial.println("Accumulator after addition: " + String(accumulator));
      }
    } 
    else if (input.startsWith("SUB")) {
      int index = getArgument(input);
      if (isValidIndex(index)) {
        accumulator -= memory[index];
        Serial.println("Accumulator after subtraction: " + String(accumulator));
      }
    } 
    else if (input.startsWith("MUL")) {
      int index = getArgument(input);
      if (isValidIndex(index)) {
        accumulator *= memory[index];
        Serial.println("Accumulator after multiplication: " + String(accumulator));
      }
    } 
    else if (input.startsWith("DIV")) {
      int index = getArgument(input);
      if (isValidIndex(index)) {
        if (memory[index] != 0) {
          accumulator /= memory[index];
          Serial.println("Accumulator after division: " + String(accumulator));
        } else {
          Serial.println("Error: Division by zero");
        }
      }
    } 
    else if (input.equalsIgnoreCase("RESET")) {
      resetMemory();
      Serial.println("Memory and accumulator reset to 0");
    } 
    else if (input.equalsIgnoreCase("SHOW")) {
      displayState();
    } 
    else {
      Serial.println("Invalid command. Try again.");
    }
  }
}

// Function to extract an argument (index) from the input command
int getArgument(String input) {
  int spaceIndex = input.indexOf(' ');
  if (spaceIndex > 0) {
    return input.substring(spaceIndex + 1).toInt();
  }
  return -1; // Invalid argument
}

// Function to check if an index is valid
bool isValidIndex(int index) {
  if (index >= 0 && index < memorySize) {
    return true;
  }
  Serial.println("Error: Invalid memory index");
  return false;
}

// Function to reset memory and accumulator
void resetMemory() {
  for (int i = 0; i < memorySize; i++) {
    memory[i] = 0;
  }
  accumulator = 0;
}

// Function to display the current state of memory and accumulator
void displayState() {
  Serial.println("Current State:");
  Serial.println("Accumulator: " + String(accumulator));
  Serial.print("Memory: ");
  for (int i = 0; i < memorySize; i++) {
    Serial.print("[" + String(i) + "]: " + String(memory[i]) + " ");
  }
  Serial.println();
}