Feel free to read all the documentation on my project report: [Rapport Finale.pdf](https://github.com/user-attachments/files/17532406/Final.report.pdf)
#### SCOpot: Smart Connected Flower Pot 🌱
SCOpot is a **smart IoT flower pot** designed to automate plant care using **embedded systems** and AI. One of the key innovations in this project is the use of the **FOMO (Faster Objects, More Objects)** algorithm. This lightweight machine learning model is optimized for **embedded systems**, like the **ESP32CAM**, enabling real-time plant identification without consuming much power, memory or any heavy computational resources.

You can read everything about the FOMO algorithm on here : https://docs.edgeimpulse.com/docs/edge-impulse-studio/learning-blocks/object-detection/fomo-object-detection-for-constrained-devices

**SCOpot** monitors key environmental factors—soil moisture, temperature, humidity, and light—using sensors such as the **DHT11** (temperature/humidity sensor), **photoresistor** (light sensor), and a **soil moisture sensor**. It automates irrigation using a **water pump** and a **relay system**, ensuring the plant is watered only when needed. The system provides real-time feedback via a **web and mobile dashboard** built with the **Blynk IoT platform**.

Key Features:
- **AI-powered plant identification**: SCOpot uses the **FOMO algorithm** via **Edge Impulse** and **TensorFlow Lite** to identify plant types using the ESP32CAM. FOMO is specially designed for embedded systems, offering fast and accurate object detection with minimal resource usage.
- **Automated irrigation**: The system automatically waters the plant based on soil moisture levels.
- **Real-time monitoring**: Sensors track temperature, humidity, and light, and the data is displayed on a web and mobile dashboard using **Blynk**.
- **User interface**: SCOpot provides users with real-time alerts and insights about their plant's health via a dashboard.

Technologies:
- **Microcontroller**: ESP32, ESP32CAM
- **AI & Machine Learning**: FOMO algorithm (Edge Impulse), TensorFlow Lite
- **Sensors**: DHT11 (temperature/humidity), soil moisture sensor, photoresistor (light sensor)
- **Actuators**: Water pump, relay

- **IoT Platform**: Blynk for real-time monitoring and notifications
- **Programming**: C++, Python
- **Tools**: Arduino IDE, Fritzing, Lucidchart

### How to Run:
1. 1. Assemble all the necessary equipments ( sensors, actuators, wires ...)
2. Install the necessary libraries (WiFi.h, Blynk, DHT).
3. Flash the ESP32 and ESP32CAM using Arduino IDE.
4. Set up the Blynk dashboard for real-time monitoring and alerts.
5. Use Edge Impulse to train the FOMO model and deploy it on the ESP32CAM for live object detection.

SCOpot shows how the **FOMO algorithm** can bring real-time object detection to resource-limited devices, making smart gardening possible on low-power, low-cost hardware like the ESP32CAM.
---
Let me know if you'd like further assistance with the process!
