# 👟 Smart Shoe for Blind Person

A Smart Shoe for Blind Person is an Arduino-based assistive device designed to help visually impaired individuals detect obstacles while walking. The system uses an ultrasonic sensor to identify nearby objects and a piezoelectric sensor to detect pressure or impact. It alerts the user through a buzzer and LED, improving mobility, safety, and independence.

---

## 📌 Features

- 👟 Smart obstacle detection
- 📡 Ultrasonic sensor for distance measurement
- 🦶 Piezoelectric sensor for pressure/impact detection
- 🔴 LED visual indication
- 🔊 Buzzer audio alert
- 🔋 Battery-powered portable system
- ⚡ Lightweight and low-cost design

---

## 🛠️ Technologies Used

### Hardware

- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Piezoelectric Sensor
- Buzzer
- LED
- 9V Battery
- ON/OFF Switch
- Jumper Wires
- Shoe

### Programming Language

- Embedded C (Arduino)

---

## 📂 Project Structure

```
Smart-Shoe-for-Blind-Person/
│
├── Smart_Shoe.ino
├── README.md
├── LICENSE
├── Images/
│   ├── Hardware_Setup.jpg
│   ├── Block_Diagram.png
│   └── Output.jpg
├── Video/
│   └── Demo.mp4
└── Documents/
    └── Project_Report.pdf
```

---

## ⚙️ Working Principle

1. The ultrasonic sensor continuously measures the distance between the shoe and nearby obstacles.

2. If an obstacle is detected within the predefined range, the Arduino activates the buzzer and LED to alert the user.

3. The piezoelectric sensor detects pressure or sudden impact while walking.

4. The Arduino processes both sensor inputs and provides immediate feedback.

5. The entire system is powered by a 9V battery, making it portable and suitable for daily use.

---

## 🔌 Circuit Connections

| Component | Arduino Pin |
|-----------|-------------|
| Ultrasonic Trigger | D9 |
| Ultrasonic Echo | D10 |
| Buzzer | D11 |
| LED | D13 |
| Piezoelectric Sensor | A0 |

---

## 🚀 How to Run Locally

### 1. Clone the Repository

```bash
git clone https://github.com/YourUsername/Smart-Shoe-for-Blind-Person.git
```

### 2. Open the Project

Open `Smart_Shoe.ino` using the Arduino IDE.

### 3. Assemble the Hardware

Connect all components according to the circuit diagram.

### 4. Upload the Code

Select:

- Board → Arduino Uno
- Port → Connected COM Port

Click **Upload**.

### 5. Test the System

- Place an object in front of the ultrasonic sensor.
- The buzzer and LED will activate when an obstacle is detected.
- Apply pressure to the piezoelectric sensor to observe the alert response.

---

## 📸 Screenshots

Add your project images inside the **Images** folder.

```
Images/
├── Hardware_Setup.jpg
├── Block_Diagram.png
└── Output.jpg
```

---

## 🎥 Demo Video

Store your demonstration video in the **Video** folder.

```
<img width="1280" height="577" alt="smart shoe" src="https://github.com/user-attachments/assets/4fe84d70-e5a3-4976-9297-c8cc97113bac" />


---

## 🎯 Applications

- Assistive technology for visually impaired individuals
- Obstacle detection during walking
- Safe indoor and outdoor navigation
- Smart wearable healthcare devices
- Personal mobility assistance

---

## 🔮 Future Improvements

- GPS navigation
- Voice guidance system
- GSM emergency alert
- Bluetooth mobile application
- Rechargeable lithium battery
- ESP32 IoT monitoring
- AI-based obstacle recognition using a camera
- Water detection sensor
- Multiple ultrasonic sensors for 360° obstacle detection

---

## 👩‍💻 Author

**Pavithra P**

Electronics and Communication Engineering Student

Interested in Embedded Systems, IoT, and AI-based Smart Solutions.

**GitHub:**  
https://github.com/YourUsername



---

## 🤝 Support

If you found this project useful, please consider giving it a ⭐ on GitHub.

Your support motivates me to build and share more Embedded Systems and IoT projects.

---

