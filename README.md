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

⚙️ [](url)Working Principle
Step 1: Configuration Mode (Switch-2 / EINT1)

When Switch-2 is pressed:

Enter configuration mode
Edit RTC date and time
Configure medicine schedules
Store configuration data
Step 2: Real-Time Monitoring

The system continuously:

Reads RTC date and time
Displays current time on the LCD
Compares RTC time with stored schedules

Step 3: Reminder Generation

When the RTC time matches a stored schedule:

* LCD displays:

```text
TIME FOR
MEDICINE
```

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

## 🖼️ Project Images

### 1. System Block Diagram

```markdown
![Block Diagram](images/block_diagram.png)
```

### 2. Hardware Setup

```markdown
![Hardware Setup](images/hardware_setup.jpg)
```

### 3. Power ON Screen

```markdown
![Power ON Screen](images/power_on_screen.jpg)
```

### 4. RTC Display Screen

```markdown
![RTC Display](images/rtc_display.jpg)
```

### 5. Main Configuration Menu

```markdown
![Configuration Menu](images/main_menu.jpg)
```

### 6. RTC Time Edit Screen

```markdown
![RTC Edit](images/rtc_edit.jpg)
```

### 7. Medicine Schedule Configuration

```markdown
![Medicine Schedule](images/medicine_edit.jpg)
```

### 8. Medicine Reminder Alert

```markdown
![Medicine Reminder](images/time_for_medicine.jpg)
```

### 9. Medicine Taken Confirmation

```markdown
![Medicine Taken](images/medicine_taken.jpg)
```

### 10. Reminder Timeout Screen

```markdown
![Reminder Timeout](images/reminder_timeout.jpg)
```

### 11. Software Flow Diagram

```markdown
![Software Flow Diagram](images/flowchart.png)
```

---

## 🔑 Switch Functions

| Switch   | Interrupt | Function                           |
| -------- | --------- | ---------------------------------- |
| Switch-1 | EINT0     | Stop Buzzer / Acknowledge Reminder |
| Switch-2 | EINT1     | Enter Configuration Mode           |

---

## 🧭 User Guide

1. Power ON the system.
2. LCD displays the current RTC time.
3. Press Switch-2 to enter configuration mode.
4. Configure RTC and medicine schedules.
5. Wait for the scheduled reminder.
6. Buzzer alerts when medicine time occurs.
7. Press Switch-1 after taking medicine.
8. System returns to monitoring mode.

---

## 🌍 Applications

* Home Healthcare Systems
* Elderly Care Assistance
* Personal Medicine Management
* Hospital Patient Reminder Systems
* Medical Monitoring Devices

---

## 🔮 Future Enhancements

* Multiple Medicine Scheduling
* EEPROM-Based Schedule Storage
* GSM SMS Alerts
* Mobile App Integration
* IoT Cloud Monitoring
* Voice-Based Reminder System
* Low-Power Operation

---

## 👨‍💻 Developed By

**Pandaraboina Rajasekhar**

* Embedded Systems Developer
* LPC2148 ARM7 Programming
* RTC-Based Applications
* LCD and Keypad Interfacing
* Buzzer Alert Systems

---

## 📜 License

This project is developed for academic and educational purposes.

You are free to use, modify, and enhance this project with proper credit to the author.

---

## ⭐ Support

If you found this project useful, please consider giving the repository a **Star ⭐** on GitHub.


