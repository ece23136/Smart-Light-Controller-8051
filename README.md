💡 8051 Smart AC Light Controller
Energy Management System using AT89S52
🌍 Problem Statement

A significant amount of electrical energy is wasted globally due to lights (streetlights, corridors, outdoor lighting) remaining ON during daylight hours. Manual switching is:

❌ Unreliable
❌ Labor-intensive
❌ Costly (higher electricity bills)
❌ Environmentally harmful
✅ Proposed Solution

This project implements an Autonomous Dusk-to-Dawn Lighting System using an 8051 microcontroller (AT89S52).

The system:

Automatically turns OFF lights during daytime
Automatically turns ON lights at night
Eliminates manual intervention
Reduces energy consumption and cost
🚀 Project Overview

This embedded system uses:

A custom analog light sensing circuit
An LM393 comparator
An LDR (Light Dependent Resistor)

The microcontroller continuously monitors ambient light levels and controls a 220V AC bulb via a relay module.

🎥 Project Demo

📌 
Demo_Video.mp4 
📸 Project Images
🔹 Final Working Model
[ Insert Final Output Image Here ]
🔹 Breadboard Circuit Setup
[ Insert Breadboard Image Here ]
🔹 8051 Development Board Connections
[ Insert 8051 Wiring Image Here ]
🔹 Relay & AC Wiring
[ Insert Relay + AC Wiring Image Here ]
🧠 Core Concept
⚙️ Comparator-Based Light Detection

Instead of using a ready-made sensor module, this project uses a custom-built analog comparator circuit:

LDR senses ambient light
Potentiometer sets threshold
LM393 compares voltages
Output sent to 8051
🔌 Hardware Components
AT89S52 (8051) Development Board
LM393 Voltage Comparator (DIP-8)
LDR (Light Dependent Resistor)
2 × 10kΩ Resistors
3-Pin Potentiometer Module
5V Relay Module (Active-Low)
220V AC Bulb + Holder
Breadboard & Jumper Wires
5V Power Supply (USB Recommended)
🔧 Circuit Connections
🟢 Low Voltage (5V DC)
LM393 Comparator
Pin	Connection
Pin 8	+5V
Pin 4	GND
Pin 3 (IN+)	LDR + Resistor junction
Pin 2 (IN-)	Potentiometer output
Pin 1 (OUT)	P2.5 (via 10k pull-up)
Relay Module
Pin	Connection
VCC	+5V
GND	GND
IN	P2.6
🔴 High Voltage (220V AC)

⚠️ WARNING: Handle with extreme caution

Live (Phase) → Relay COM
Relay NO → Bulb
Neutral → Direct to Bulb
🧠 Engineering Highlight
🔌 Open-Collector Output (LM393)

The LM393 uses an open-collector output, meaning:

It can pull LOW (0V)
It cannot generate HIGH (5V)

👉 Solution: Use a 10kΩ pull-up resistor

Condition	Output
Dark	HIGH (5V)
Bright	LOW (0V)
⚡ Working Principle
LDR detects ambient light
Comparator compares it with threshold
Output sent to 8051
Microcontroller drives relay
Condition	Relay Input	Bulb
Dark	LOW	ON
Bright	HIGH	OFF
💻 Firmware (Embedded C)

📌 Add your code file or snippet here

[ Paste your Embedded C Code Here ]
🔑 Key Features
Debounce delay to prevent relay chatter
Stable switching
Noise immunity
🌐 Applications
🏙️ Smart Street Lighting
🏠 Home Automation & Security
🌱 Greenhouse Light Control
🏭 Industrial Lighting Systems
📈 Future Improvements
Add IoT (ESP32/WiFi) for remote monitoring
Solar power integration
Adaptive brightness control (PWM dimming)
Motion detection
⚠️ Safety Precautions
Disconnect AC supply before wiring
Use insulated wires
Avoid touching relay when powered
Use proper casing for real-world deployment
👨‍💻 Author

Rohit Singh
B.Tech ECE | VLSI & Embedded Systems

⭐ Support

If you found this useful:

⭐ Star the repository
🍴 Fork it
🤝 Contribute
