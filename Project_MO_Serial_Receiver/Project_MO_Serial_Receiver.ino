String receivedCommand;

void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println("MO_SERIAL_READY");
}

void loop() {
  if (Serial.available() > 0) {
    receivedCommand = Serial.readStringUntil('\n');
    receivedCommand.trim();

    if (receivedCommand.length() > 0) {
      executeCommand(receivedCommand);
    }
  }
}

void executeCommand(String command) {
  if (command == "SLEEP") {
    Serial.println("ACK:SLEEP");
  }
  else if (command == "WAKE_UP") {
    Serial.println("ACK:WAKE_UP");
  }
  else if (command == "PLAY_SOUND") {
    Serial.println("ACK:PLAY_SOUND");
  }
  else if (command == "SHOW_STATUS") {
    Serial.println("ACK:SHOW_STATUS");
  }
  else if (command == "SHOW_HAPPY_FACE") {
    Serial.println("ACK:SHOW_HAPPY_FACE");
  }
  else if (command == "GREETING") {
    Serial.println("ACK:GREETING");
  }
  else if (command == "START_TIMER_15_MINUTES") {
    Serial.println("ACK:START_TIMER_15_MINUTES");
  }
  else {
    Serial.print("ERROR:UNKNOWN_COMMAND:");
    Serial.println(command);
  }
}