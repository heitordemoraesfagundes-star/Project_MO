String command;
bool sleeping = false;

void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println("Project MO started.");
  Serial.println("Enter a command:");
}

void loop() {
  if (Serial.available() > 0) {
    command = Serial.readStringUntil('\n');
    command.trim();
    command.toLowerCase();

    executeCommand(command);
  }
}

void executeCommand(String receivedCommand) {
  if (receivedCommand == "wake up") {
    sleeping = false;
    Serial.println("MO is now awake.");
  }
  else if (receivedCommand == "sleep") {
    sleeping = true;
    Serial.println("Entering sleep mode.");
  }
  else if (sleeping) {
    Serial.println("MO is sleeping. Enter 'wake up' first.");
  }
  else if (
  receivedCommand == "hello mo" ||
  receivedCommand == "hi mo" ||
  receivedCommand == "hey mo"
) {
  Serial.println("Hello! How can I help?");
}
  else if (receivedCommand == "who are you") {
    Serial.println("I am MO, your desktop robot assistant.");
  }
  else if (receivedCommand == "status") {
    Serial.println("Project MO is active and functioning normally.");
  }
  else {
    Serial.println("Command not recognized.");
  }
}