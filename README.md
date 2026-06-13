# 💊 USER CONFIGURABLE MEDICINE REMINDER SYSTEM

## 📖 Project Overview

The User Configurable Medicine Reminder System continuously monitors real-time clock data and compares it with user-defined medicine schedules. When a scheduled time is reached, the system alerts the user using a buzzer and LCD notification.

This system is particularly useful for elderly individuals, patients, and healthcare environments where timely medicine intake is important.

---

## 🎯 Aim of the Project

To design and develop a medicine reminder system that enables users to configure medicine schedules and receive automatic alerts at the appropriate time.

---

## ✨ Features

* 🕒 Real-Time Clock (RTC) Monitoring
* 💊 User-Configurable Medicine Timings
* ⚡ Interrupt-Based Control
* 📺 LCD User Interface
* 🔔 Buzzer Alert Notification
* ⏰ Automatic Reminder Generation
* ✏️ RTC Time Editing
* 📝 Medicine Schedule Editing
* 🔄 Continuous Real-Time Monitoring
* 🔕 Reminder Acknowledgment Function

---

## 🔧 Hardware Requirements

* LPC2148 ARM7 Microcontroller
* 16×2 LCD Display
* 4×4 Matrix Keypad
* RTC Module
* Buzzer
* Push Buttons (Switch-1 and Switch-2)
* USB-UART Converter / DB9 Cable

---

## 💻 Software Requirements

* Embedded C Programming
* Keil µVision IDE
* Flash Magic

---
## 🏗️ System Architecture
 
![System Block Diagram](images/block_diagram.png) 
The system consists of:
* LPC2148 ARM7 Microcontroller
* RTC Module
* 4×4 Matrix Keypad
* LCD Display
* Buzzer
* Switch-1 (EINT0)
* Switch-2 (EINT1)
All reminder scheduling, monitoring, and alert operations are managed by the LPC2148 microcontroller.

---
## ⚙️ Working Principle 
The system operates using RTC-based medicine scheduling and interrupt-based user interaction.
### Step 1: Configuration Mode (Switch-2 / EINT1)
When Switch-2 is pressed:
* Enter configuration mode
* Edit RTC date and time
* Configure medicine schedules
* Store configuration data in memory
### Step 2: Real-Time Monitoring 
The controller continuously:
* Reads current RTC date and time
* Displays RTC information on LCD
* Compares RTC time with stored medicine schedules
### step 3: Reminder Generation
When the current RTC time matches a stored medicine schedule: 

* LCD displays **"TIME FOR MEDICINE
* Buzzer generates periodic alerts
* Reminder timer starts

* Buzzer generates alerts
* Reminder timer starts

### Step 4: Acknowledgment (Switch-1 / EINT0)

When Switch-1 is pressed:

* Buzzer stops
* Reminder is cleared
* System returns to monitoring mode

### Step 5: Automatic Timeout

If the reminder is not acknowledged:

* Buzzer stops automatically
* Reminder message is cleared
* System resumes RTC monitoring

---

🖼️ Project Images 
📊 1. System Block Diagram

<img width="1474" height="1067" alt="image" src="https://github.com/user-attachments/assets/d34eedb4-c158-4548-9347-8f35c8f25c9e" />


This diagram illustrates the interconnection of LPC2148, RTC, keypad, switches, LCD, and buzzer.

--- 
### 🔌 2. Hardware Setup

<img width="1397" height="1126" alt="image" src="https://github.com/user-attachments/assets/4931dfe0-27f5-4617-a201-7c47f24ac8ff" />



This image shows the complete hardware implementation of the Medicine Reminder System.

---
### 📟 3. Power ON Screen

Displays the project welcome message after power-up.

<img width="1800" height="874" alt="image" src="https://github.com/user-attachments/assets/87a5fb3e-13b2-404e-aa84-6a612be15e0d" />
 

This screen is displayed immediately after system startup and confirms successful initialization of all peripherals.

---
### 📟 4. RTC Display Screen

Displays the current RTC date and time.

<img width="1672" height="941" alt="image" src="https://github.com/user-attachments/assets/8ec24eba-08c9-4f94-8036-9fac5087f894" />



The LCD continuously displays the current date and time while monitoring medicine schedules.

---
### ⚙️ 5. Main Configuration Menu

Displayed when Switch-2 (EINT1) is pressed.

<img width="1536" height="1024" alt="image" src="https://github.com/user-attachments/assets/88ea3c79-79d0-4610-8f86-2177008362bf" />


The user can configure:
* RTC Time
* Medicine Schedule
* Exit Configuration Mode
  
 ---
 
### 🕒 6. RTC Time Edit

RTC configuration screen.

<img width="1672" height="940" alt="image" src="https://github.com/user-attachments/assets/859fff16-7c2b-4318-a9e4-fbde22b13bcd" />


Allows modification of current RTC date and time values.

---

### 💊 7. Medicine Schedule Configuration

Medicine timing setup screen.

<img width="1672" height="941" alt="image" src="https://github.com/user-attachments/assets/f4a83b2d-e323-4198-9364-b97f82d47994" />
 

The user enters medicine reminder timings using the keypad.


---

### 🚨 8. Medicine Reminder Alert

Reminder notification screen.

<img width="1672" height="941" alt="image" src="https://github.com/user-attachments/assets/392a5158-468d-453e-a09a-2ac98390658d" />


Displayed when the current RTC time matches a stored medicine schedule.

The LCD displays:

text

TIME FOR

MEDICINE

and activates the buzzer alert.

---

### 🔕 9. Medicine Taken Confirmation

Reminder acknowledgment screen.

<img width="1672" height="941" alt="image" src="https://github.com/user-attachments/assets/de35ac2c-41d7-4e82-b7e9-7433164f7804" />


Displayed when the user confirms medicine intake by pressing Switch-1.

--- 

### ⏳ 10. Reminder Timeout

Reminder timeout screen.

<img width="1672" height="941" alt="image" src="https://github.com/user-attachments/assets/2234e56b-eeb5-443e-a39d-02c11a5e72f2" />


If the reminder is not acknowledged within the timeout period, the buzzer stops automatically and the system returns to monitoring mode.

---

### 🔄 11. Software Flow Diagram

<img width="1450" height="1085" alt="image" src="https://github.com/user-attachments/assets/714601d8-5dcd-479d-a848-fd3906ca826f" />
>


Shows the complete software execution flow including initialization, configuration, monitoring, reminder generation, acknowledgment, and timeout handling.

--- 

### 🔑 Switch Functions

|  Switch | Interrupt | Function |
| --------| --------- | ---------------------------------- | 
| Switch-1 | EINT0 | Stop Buzzer / Acknowledge Reminder |
| Switch-2 | EINT1 | Enter Configuration Mode |

---

## 🧭 User Guide 

1. Power ON the system.
2. LCD displays current RTC time.
3. Press Switch-2 to enter configuration mode. 4.
4. Configure RTC and medicine schedules. 5.
5. Wait for the scheduled reminder. 6.
6. Buzzer alerts when medicine time occurs. 7.
7. Press Switch-1 after taking medicine. 8.
8. System returns to monitoring mode.
 ---
### 🌍 Applications 
* Home Healthcare Systems
* Elderly Care Assistance *
* Personal Medicine Management *
* Hospital Patient Reminder Systems *
* Medical Monitoring Devices
  ---
### 🔮 Future Enhancements
* Multiple Medicine Scheduling
* EEPROM-Based Schedule Storage *
* GSM SMS Alerts *
* Mobile App Integration *
* IoT Cloud Monitoring *
* Voice-Based Reminder System *
* Low-Power Operation
---
### 👨‍💻 Developed By 

Pandaraboina Rajasekhar

* Embedded Systems Developer *
* LPC2148 ARM7 Programming *
* RTC-Based Applications *
* LCD & Keypad Interfacing *
* Buzzer Alert Systems
---
### 📜 License 

This project is developed for academic and educational purposes.

You are free to use, modify, and enhance this project with proper credit to the author.

--- 
⭐ If you found this project useful, don't forget to **Star** the repository!
