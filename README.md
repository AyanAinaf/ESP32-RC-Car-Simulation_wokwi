# ⚡ ESP32 RC CAR CONTROL SYSTEM  
### 🚗 Simulation → Reality (In Progress)

> “Design it. Simulate it. Build it. Race it.”

---

## 🔥 Project Overview
This project focuses on building a **directional control system for an RC car** using the ESP32 microcontroller.

Instead of directly jumping to hardware, the system is first **engineered and validated in simulation**, ensuring clean logic before real-world deployment.

---

## 🎮 What It Does
Control a car using 4 directional inputs:

⬆️ Forward  
⬇️ Reverse  
⬅️ Left  
➡️ Right  

🧠 All logic handled by ESP32

---

## 🧪 Simulation First Approach
Built using **Wokwi Simulator**

💡 Motors are replaced with LEDs:
- LED ON = Motor Active  
- LED OFF = Motor Inactive  

This allows:
✔ Safe testing  
✔ Logic verification  
✔ Zero hardware risk  

---

## ⚙️ Tech Stack
- 🔹 ESP32 Microcontroller  
- 🔹 Embedded C (Arduino Framework)  
- 🔹 Wokwi Simulation  
- 🔹 GPIO Control Logic  

---

---

## 🚧 Reality Check (Important)
> ESP32 GPIO cannot drive motors directly.

So in real hardware:
- LEDs ❌  
- Motor Driver (L298N / L293D) ✅  
- DC Motors ✅  

---

## 📊 Current Status

| Phase        | Status |
|-------------|--------|
| Simulation  | ✅ Completed |
| Hardware    | 🔄 In Progress |
| Optimization| ⏳ Pending |

---

## 🛠️ Next Level Upgrades
- ⚡ Motor Driver Integration  
- 📡 WiFi / Bluetooth Control  
- 🎚️ PWM Speed Control  
- 🏁 Race Optimization  

---

## 📸 Circuit Preview
<img width="959" height="451" alt="Circuit Layout " src="https://github.com/user-attachments/assets/d6fed6d2-f07c-4aab-a284-66c549d39d05" />


---

## 🔗 Live Simulation
👉 (https://wokwi.com/projects/461474186900541441)

---

## 💻 Code
Check inside `/code` folder  

---

## 🤝 Let’s Connect
Got suggestions? Ideas? Improvements?

I’m open to feedback from:
- Embedded Engineers  
- Robotics Enthusiasts  
- Builders 🚀  

---

## 👨‍💻 Author
**Ayan Ainaf**
