# 🌡️ Smart Temperature Monitoring and Alert System Using Arduino UNO

### Real-Time Temperature Detection with LED and Buzzer Alert Using DHT11 Sensor

---

##  About the Project

The **Smart Temperature Monitoring and Alert System** is an Arduino-based electronics project designed to monitor surrounding temperature using a DHT11 temperature sensor. The system continuously measures temperature and displays the readings on the Serial Monitor.

When the temperature reaches or exceeds **32°C**, the system automatically activates a buzzer and makes an LED blink to provide both audible and visual alerts. When the temperature falls below the threshold, the LED and buzzer are turned OFF.

This project demonstrates temperature sensor interfacing, real-time monitoring, conditional programming, and automated alert mechanisms using Arduino UNO.

---

##  Project Objectives

- To monitor surrounding temperature using a DHT11 sensor.
- To display temperature readings through the Serial Monitor.
- To detect temperature levels above a predefined threshold.
- To provide visual alerts using an LED.
- To provide audible alerts using a buzzer.
- To understand sensor interfacing and automation using Arduino UNO.

---

## Features

- **Real-Time Temperature Monitoring:** Continuously measures surrounding temperature using the DHT11 sensor.
- **Serial Monitor Display:** Displays temperature readings through the Arduino Serial Monitor.
- **Automatic Temperature Detection:** Checks whether the temperature has reached the predefined threshold.
- **LED Alert Indication:** Blinks the LED when the temperature reaches or exceeds 32°C.
- **Buzzer Alert:** Activates the buzzer to provide an audible warning.
- **Threshold-Based Control:** Uses 32°C as the temperature alert limit.
- **Automatic Alert Reset:** Turns OFF the LED and buzzer when the temperature falls below 32°C.
- **Continuous Operation:** Repeats the monitoring process automatically.

---

## Components Required

| S.No | Component | Quantity |
|---|---|---:|
| 1 | Arduino UNO | 1 |
| 2 | DHT11 Temperature Sensor | 1 |
| 3 | LED | 1 |
| 4 | Buzzer | 1 |
| 5 | 220Ω Resistor | 1 |
| 6 | Breadboard | 1 |
| 7 | Jumper Wires | As required |
| 8 | USB Cable | 1 |

---

##  Circuit Connections

| Component | Arduino UNO Pin |
|---|---|
| DHT11 Data Pin | Digital Pin 2 |
| LED Positive Pin | Digital Pin 4 |
| Buzzer Positive Pin | Digital Pin 3 |
| LED Negative Pin | GND through resistor |
| Buzzer Negative Pin | GND |

---

##  Project Hardware Setup

The following image shows the hardware setup of the Smart Temperature Monitoring and Alert System using Arduino UNO and DHT11 sensor.

![Smart Temperature Monitoring and Alert System Hardware Setup](./TEMPERATURE%20ALERT.jpeg)

---

##  Working Principle

1. The DHT11 sensor detects the surrounding temperature.
2. The sensor sends temperature data to the Arduino through digital pin 2.
3. Arduino reads the temperature using the DHT library.
4. The measured temperature is displayed on the Serial Monitor.
5. If the temperature reaches or exceeds **32°C**, the buzzer turns ON and the LED starts blinking.
6. If the temperature is below 32°C, both the LED and buzzer remain OFF.
7. The monitoring process continues automatically.

---

## Arduino Source Code

**Source File:** `temperature_alert.ino`

[📂 View Arduino Source Code](./temperature_alert.ino)

---

##  Serial Monitor Output

The temperature readings are displayed continuously in the Arduino Serial Monitor.

Example:

```text
28.00
29.00
31.00
32.00
33.00
```

When the temperature reaches 32°C or above, the LED starts blinking and the buzzer is activated.

*Note: The values shown are examples. Actual readings depend on the surrounding temperature.*

---

##  Concepts Learned

- Arduino UNO programming
- DHT11 temperature sensor interfacing
- Temperature measurement
- Serial communication
- Conditional statements (`if-else`)
- Digital input/output control
- LED and buzzer interfacing
- Automated alert systems

---

## Future Improvements

- Add an LCD or OLED display to show temperature readings.
- Integrate Wi-Fi for remote temperature monitoring.
- Send mobile notifications when the temperature exceeds the threshold.
- Store temperature readings for data analysis.
- Add humidity monitoring using the DHT11 sensor.

---

##  Applications

- Smart home temperature monitoring
- Room temperature alert systems
- Electronic equipment temperature monitoring
- Laboratory temperature monitoring
- Educational IoT and embedded systems projects

---


##  Acknowledgement

This project was developed as part of learning Arduino programming, sensor interfacing, and basic automation techniques.

---
