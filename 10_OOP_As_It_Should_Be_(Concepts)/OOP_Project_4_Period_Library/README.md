🧮 **Period Library – C++ OOP Console Component**
**Project 4**

A lightweight C++ component designed to represent and manage time periods using start and end dates.

The project introduces a `clsPeriod` class that builds on top of the `clsDate` library, allowing comparison between date ranges and detection of overlapping periods in a clean, object-oriented manner.

---

## 📌 About the Project

This library defines a `clsPeriod` class that represents a time interval using two `clsDate` objects:
- A start date
- An end date

The class provides functionality to compare periods and determine whether two time intervals overlap, which is a common requirement in scheduling, booking systems, and time-based calculations.

---

## 🧩 Core Features (Period Library)

- **✔ Period Representation**
  - Models a period using a start date and an end date.

- **✔ Integration with Date Library**
  - Uses the `clsDate` class for all date operations and comparisons.

- **✔ Period Overlap Detection**
  - Determine whether two periods overlap with each other.
  - Check whether the current period overlaps with another period.

- **✔ Readable Output**
  - Print the start and end dates of the period in a clear format.

- **✔ Simple & Focused Design**
  - Implements only essential functionality required for period comparison without unnecessary complexity.

---

## 🛠 Tech Stack

- **Language:** C++
- **Paradigm:** Object-Oriented Programming (OOP)
- **Platform:** Console Application / Library Component

---

## 🎯 Technical Concepts Demonstrated

- **Class Composition**
  - Demonstrates how complex objects (`clsPeriod`) can be composed using other classes (`clsDate`).

- **Encapsulation**
  - Period boundaries are accessed and manipulated through well-defined class methods.

- **Static vs Instance Methods**
  - Static method for comparing arbitrary periods.
  - Instance method for comparing the current period with another period.

- **Reusability**
  - Designed as a reusable building block for larger systems such as scheduling or booking applications.

---

## ⚠️ Design Note

This implementation assumes that the start date is less than or equal to the end date. Validation of period boundaries is not enforced and can be added as an enhancement if required.

---

## 📬 Connect

- 🌐 **GitHub:** [Sara Alterkawi](https://github.com/sara-alterkawi)
- 💼 **LinkedIn:** [Sara Alterkawi](https://www.linkedin.com/in/sara-alterkawi-911526101/)