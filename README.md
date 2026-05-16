# 🚦 IoT Traffic Light Control System using ESP32 & Blynk

## 📌 Project Overview

This project is an **IoT-based Traffic Light Control System** developed using **ESP32, Blynk IoT platform, Wokwi simulator, and VS Code (PlatformIO)**.  
It allows users to control a traffic light system (Red, Yellow, Green LEDs) remotely using a mobile application.

The system demonstrates how IoT can be used to simulate and control real-world traffic systems efficiently.

---

## 🎯 Objectives

- To design and simulate a smart traffic light system
- To control traffic signals using a mobile application
- To understand IoT communication using ESP32 and Blynk
- To integrate Wokwi simulation with real-time IoT control

---

## 🛠️ Technologies Used

- ESP32 Dev Module
- Blynk IoT Platform  
- Wokwi Simulator  
- VS Code (PlatformIO)  
- Arduino Framework  

---

## ⚙️ System Architecture

- Mobile app sends commands via Blynk server
- ESP32 receives signals through WiFi
- LEDs represent traffic signals (Red, Yellow, Green)

---

## 🔌 Components Used

- ESP32 Microcontroller  
- Red LED (Stop signal)  
- Yellow LED (Wait signal)  
- Green LED (Go signal)  
- Resistors (simulated in Wokwi)  
- WiFi connection (Wokwi-GUEST)

---

## 📱 Blynk Configuration

- **Platform:** :contentReference[oaicite:0]{index=0}  
- Virtual Pins:
  - V0 → Red Light
  - V1 → Yellow Light
  - V2 → Green Light

### Dashboard Setup:
- 3 Switch Buttons:
  - Red Button → V0
  - Yellow Button → V1
  - Green Button → V2

