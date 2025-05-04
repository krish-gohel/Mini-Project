# 🚗 Voice-Controlled Robotic Car using Arduino & Bluetooth

A Bluetooth-enabled robotic car controlled using voice commands via a smartphone. Built with an **Arduino UNO**, **motor driver module (L298N)**, and a **Bluetooth module (HC-05)**, this project demonstrates basic robotics, wireless communication, and real-time control.

---

## 🔧 Features

- 🎙️ Voice-controlled navigation (forward, backward, left, right, stop)
- 📱 Bluetooth connectivity via mobile app
- 🔌 Motor driver (L298N) to control two DC motors
- 🧠 Simple command processing using Arduino
- 🔋 Powered by external battery pack (for motors)

---

## 🧰 Components Used

| Component             | Description                            |
|----------------------|----------------------------------------|
| Arduino UNO          | Main microcontroller board             |
| HC-05 Bluetooth Module | Wireless interface for voice control  |
| L298N Motor Driver   | Controls two DC motors                 |
| DC Motors (x2)       | For moving the robot chassis           |
| Chassis + Wheels     | Robot body structure                   |
| Power Supply         | 9V Battery or Li-ion pack              |
| Android App          | For voice command (e.g., BT Voice Control) |

---

## ⚙️ How It Works

1. The HC-05 Bluetooth module receives voice command data from a smartphone.
2. The Arduino interprets the command (e.g., "forward", "stop").
3. Based on the command, it sends signals to the L298N motor driver.
4. Motors rotate accordingly to move the car in the desired direction.

---

## 🧪 Voice Commands Supported

| Voice Command | Action         |
|---------------|----------------|
| forward       | Move ahead     |
| backward      | Move in reverse|
| left          | Turn left      |
| right         | Turn right     |
| stop          | Halt movement  |

---

## 🖼️ Photo:

(r![robotcar](https://github.com/user-attachments/assets/71c0fb84-c562-44a1-9839-ebb64efc68e1)
ecommended)

Or describe the wiring:
- **HC-05**: VCC to 5V, GND to GND, TX to Arduino RX, RX to Arduino TX (via voltage divider)
- **L298N**:
  - IN1/IN2 to Arduino pins (e.g., 8/9), IN3/IN4 to 10/11
  - Motor A & B outputs to DC motors
  - ENA/ENB enabled via jumper or PWM pins

---

## 💻 Arduino Code Sample

```cpp
if (command == "forward") {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}
