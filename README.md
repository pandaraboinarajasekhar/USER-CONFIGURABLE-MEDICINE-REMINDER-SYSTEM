# 💊 USER CONFIGURABLE MEDICINE REMINDER SYSTEM

## 📖 Project Overview

The **User Configurable Medicine Reminder System** is an embedded system built using the **LPC2148 ARM7 Microcontroller** and **RTC (Real-Time Clock)** to provide timely medicine reminders. The system allows users to configure medicine schedules and generates alerts using a buzzer and LCD display when the scheduled time is reached.

The project provides a simple and reliable solution for ensuring medicines are taken on time, making it suitable for elderly people, patients, and healthcare applications.

---

## 🎯 Aim of the Project

To develop a User-Configurable Medicine Reminder System that allows users to set medicine timings and receive automatic alerts at the scheduled time.

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

The following components are used in this project:

* LPC2148 ARM7 Microcontroller
* 16×2 LCD Display
* 4×4 Matrix Keypad
* RTC Module
* Buzzer
* Push Buttons (Switch-1 & Switch-2)
* USB-UART Converter / DB9 Cable

---

## 💻 Software Requirements

* Embedded C Programming
* Keil µVision IDE
* Flash Magic

---

## 🏗️ System Architecture

### System Block Diagram

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

Step 3: Reminder Generation 

When the current RTC time matches a stored medicine schedule:

* LCD displays **"TIME FOR MEDICINE"**
* Buzzer generates periodic alerts
* Reminder timer starts

Step 4: Acknowledgment (Switch-1 / EINT0)

When Switch-1 is pressed:

* Buzzer stops
* Reminder is cleared
* System returns to monitoring mode

Step 5: Automatic Timeout

If no acknowledgment is received:

* Buzzer automatically stops after timeout
* Reminder message is cleared
* System resumes RTC monitoring

---

🖼️ Project Images

📊 1. System Block Diagram

![Block Diagram](images/block_diagram.png)

This diagram illustrates the interconnection of LPC2148, RTC, keypad, switches, LCD, and buzzer.

---

🔌 2. Hardware Setup

![Hardware Setup](images/hardware_setup.jpg)

This image shows the complete hardware implementation of the Medicine Reminder System.

---

📟 3. Power ON Screen

Displays the project welcome message after power-up.

![Power ON Screen](images/power_on_screen.jpg)

This screen is displayed immediately after system startup and confirms successful initialization of all peripherals.

---

📟 4. RTC Display Screen

Displays the current RTC date and time.

![RTC Display](images/rtc_display.jpg)

The LCD continuously displays the current date and time while monitoring medicine schedules.

---

⚙️ 5. Main Configuration Menu

Displayed when Switch-2 (EINT1) is pressed.

![Configuration Menu](images/main_menu.jpg)

The user can configure:

* RTC Time
* Medicine Schedule
* Exit Configuration Mode

---

🕒 6. RTC Time Edit

RTC configuration screen.

![RTC Edit](images/rtc_edit.jpg)

Allows modification of current RTC date and time values.

---

💊 7. Medicine Schedule Configuration

Medicine timing setup screen.

![Medicine Schedule](images/medicine_edit.jpg)

The user enters medicine reminder timings using the keypad.

---

🚨 8. Medicine Reminder Alert

Reminder notification screen.

![Medicine Reminder](images/time_for_medicine.jpg)

Displayed when the current RTC time matches a stored medicine schedule.

The LCD displays:

```text
TIME FOR
MEDICINE
```

and activates the buzzer alert.

---

🔕 9. Medicine Taken Confirmation

Reminder acknowledgment screen.

![Medicine Taken](images/medicine_taken.jpg)

Displayed when the user confirms medicine intake by pressing Switch-1.

---

⏳ 10. Reminder Timeout

Reminder timeout screen.

![Reminder Timeout](images/reminder_timeout.jpg)

If the reminder is not acknowledged within the timeout period, the buzzer stops automatically and the system returns to monitoring mode.

---

🔄 11. Software Flow Diagram

![Software Flow Diagram](images/flowchart.png)

Shows the complete software execution flow including initialization, configuration, monitoring, reminder generation, acknowledgment, and timeout handling.

---

🔑 Switch Functions

| Switch   | Interrupt | Function                           |
| -------- | --------- | ---------------------------------- |
| Switch-1 | EINT0     | Stop Buzzer / Acknowledge Reminder |
| Switch-2 | EINT1     | Enter Configuration Mode           |

---

## 🧭 User Guide

1. Power ON the system.
2. LCD displays current RTC time.
3. Press Switch-2 to enter configuration mode.
4. Configure RTC and medicine schedules.
5. Wait for the scheduled reminder.
6. Buzzer alerts when medicine time occurs.
7. Press Switch-1 after taking medicine.
8. System returns to monitoring mode.

---

🌍 Applications

* Home Healthcare Systems
* Elderly Care Assistance
* Personal Medicine Management
* Hospital Patient Reminder Systems
* Medical Monitoring Devices

---

🔮 Future Enhancements

* Multiple Medicine Scheduling
* EEPROM-Based Schedule Storage
* GSM SMS Alerts
* Mobile App Integration
* IoT Cloud Monitoring
* Voice-Based Reminder System
* Low-Power Operation

---

👨‍💻 Developed By

Pandaraboina Rajasekhar

* Embedded Systems Developer
* LPC2148 ARM7 Programming
* RTC-Based Applications
* LCD & Keypad Interfacing
* Buzzer Alert Systems

---

📜 License

This project is developed for academic and educational purposes.

You are free to use, modify, and enhance this project with proper credit to the author.

---

⭐ If you found this project useful, don't forget to **Star** the repository!




