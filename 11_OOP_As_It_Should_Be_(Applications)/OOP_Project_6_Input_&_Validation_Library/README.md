✅ **Input & Validation Library – C++ OOP Console Component**  
**Project 6**

A reusable C++ input and validation library designed to handle safe user input and data validation in console applications using clean object-oriented design.

This project provides a centralized solution for validating numbers, ranges, and dates, while ensuring reliable user input through controlled validation loops.

---

## 📌 About the Project

The **Input & Validation Library** is designed as a core utility component that can be reused across different applications.

It encapsulates common input and validation tasks such as:
- Reading integers and doubles safely from the user
- Validating numeric ranges
- Validating dates and date ranges
- Ensuring input correctness without duplicating validation logic

All functionality is implemented inside a single static utility class (`clsInputValidate`), making it easy to use across projects.

---

## 🧩 Core Features (Input & Validation Library)

- **✔ Number Range Validation**
  - Check whether an integer or double is between two values.

- **✔ Date Range Validation**
  - Determine whether a date falls between two other dates.

- **✔ Safe Integer Input**
  - Read integer values from the user with validation.
  - Prevent invalid or non-numeric input.

- **✔ Integer Input with Range Validation**
  - Read an integer within a specified range with continuous validation.

- **✔ Safe Double Input**
  - Read double values from the user with validation.

- **✔ Double Input with Range Validation**
  - Read a double value within a specified range safely.

- **✔ Date Validation**
  - Verify whether a given date is valid.

---

## 🛠 Tech Stack

- **Language:** C++
- **Paradigm:** Object-Oriented Programming (OOP)
- **Platform:** Console Application / Utility Library

---

## 🎯 Technical Concepts Demonstrated

- **Static Utility Class Design**
  - All validation and input logic implemented using static methods.

- **Encapsulation**
  - Input handling and validation rules are isolated in a single class.

- **Validation Loops**
  - Controlled loops to ensure valid user input.

- **Reusability**
  - Designed as a reusable component across multiple systems.

- **Integration with Date Library**
  - Uses `clsDate` for all date-related operations and validation.

---

## ⚠️ Design Notes

- The library focuses on **input safety and validation**, not user interface design.
- Date validity relies on the underlying `clsDate` implementation.
- Error messages are customizable and passed as parameters.
- Designed for console-based applications.

---

## 📬 Connect

- 🌐 **GitHub:** https://github.com/sara-alterkawi  
- 💼 **LinkedIn:** https://www.linkedin.com/in/sara-alterkawi-911526101/