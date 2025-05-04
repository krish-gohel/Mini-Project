// Pin definitions
const int IN1 = 8;
const int IN2 = 9;
const int IN3 = 10;
const int IN4 = 11;

String command = "";

void setup() {
  // Set motor driver pins as outputs
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // Start serial communication with Bluetooth module
  Serial.begin(9600);
}

void loop() {
  // Check if data is available from Bluetooth
  if (Serial.available()) {
    command = Serial.readStringUntil('\n');  // Read until newline
    command.trim(); // Remove extra spaces or newline characters
    command.toLowerCase(); // Convert to lowercase for consistency

    // Process command
    if (command == "forward") {
      moveForward();
    } else if (command == "backward") {
      moveBackward();
    } else if (command == "left") {
      turnLeft();
    } else if (command == "right") {
      turnRight();
    } else if (command == "stop") {
      stopMoving();
    }
  }
}

// Movement Functions

void moveForward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void moveBackward() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void turnLeft() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void turnRight() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void stopMoving() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
