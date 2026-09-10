# 🏦 OOP Project 7 – Bank System with Currency Exchange  
**C++ Object-Oriented Console Application**  

A comprehensive console-based banking system developed using **C++ and Object-Oriented Programming (OOP)** principles.  
This extended version includes **currency management and conversion** in addition to the full banking operations.  

The system simulates real-world banking with authentication, role-based access, client & user management, transactions, and currency exchange.  

All components are modularized in separate header files, making the system maintainable and extensible.  

---

## 📌 About the Project

The **Bank System with Currency Exchange** is a structured and extensible banking application demonstrating real-world OOP design.

Features include:  
- Secure login system with permissions  
- Client and user management  
- Financial transactions (deposit, withdraw, transfer)  
- Currency listing, searching, updating, and conversion  
- Logging and history tracking  
- Modular screen-based architecture  

---

## 🔐 Authentication & Security

- Login with username and password  
- Lock system after **3 failed login attempts**  
- Logout and re-login support  
- Login register logging  
- Password encryption *(extension optional)*  

---

## 👥 Client Management

- Show client list  
- Add new client  
- Delete client  
- Update client information  
- Find client by account number  
- Prevent duplicate or invalid accounts  

---

## 💰 Transactions

- Deposit and withdraw with confirmation  
- Transfer between accounts  
- Show total balances  
- Transfer logging and history  

---

## 💱 Currency Management

- List all supported currencies  
- Find currency by **code** or **country**  
- Update exchange rates  
- Currency converter between two currencies  
- Ensures accurate conversion using up-to-date rates  

---

## 👤 User Management & Permissions

- List users  
- Add new user  
- Delete user (Admin is protected)  
- Update user data  
- Find user  
- Full access or custom permission-based access  
- Menu items shown based on permissions  

---

## 🚫 Authorization Control

- Fine-grained permission-based access to screens  
- Unauthorized access shows clear messages  
- Prevents accidental or malicious actions  

---

## 🧠 Input & Validation

- Centralized input validation system  
- Safe numeric and text input  
- Continuous validation with error messages  
- Prevents system crashes from invalid input  

---

## 🗂 Project Structure

### 📁 Source Files
- `OOP_Project_7_Input_Bank_System.cpp` – main entry point  

---

### 📁 Header Files

#### 🔹 Core System
- `clsScreen.h` – base class for screens  
- `Global.h` – global variables (Current User, etc.)  
- `InterfaceCommunication.h` – abstraction/interface layer  

#### 🔹 Authentication & Navigation
- `clsLoginScreen.h`  
- `clsMainScreen.h`  
- `clsLoginRegisterScreen.h`  

#### 🔹 Client Screens
- `clsClientListScreen.h`  
- `clsAddNewClientScreen.h`  
- `clsDeleteClientScreen.h`  
- `clsUpdateClientScreen.h`  
- `clsFindClientScreen.h`  

#### 🔹 Transaction Screens
- `clsTransactionsScreen.h`  
- `clsDepositScreen.h`  
- `clsWithdrawScreen.h`  
- `clsTransferScreen.h`  
- `clsTotalBalancesScreen.h`  
- `clsTransfersRegisterScreen.h`  

#### 🔹 User Management Screens
- `clsManageUsersScreen.h`  
- `clsUserListScreen.h`  
- `clsAddNewUserScreen.h`  
- `clsDeleteUserScreen.h`  
- `clsUpdateUserScreen.h`  
- `clsFindUserScreen.h`  

#### 🔹 Currency Screens
- `clsCurrencyScreen.h`  
- `clsListCurrenciesScreen.h`  
- `clsFindCurrencyScreen.h`  
- `clsUpdateCurrencyScreen.h`  
- `clsCurrencyCalculatorScreen.h`  
- `clsCurrency.h` – core entity for currencies  

#### 🔹 Core Entities
- `clsBankClient.h`  
- `clsUser.h`  
- `clsPerson.h`  

#### 🔹 Utilities & Helpers
- `clsInputValidate.h`  
- `clsDate.h`  
- `clsString.h`  
- `clsUtil.h`  

---

## 🛠 Tech Stack

- **Language:** C++  
- **Paradigm:** Object-Oriented Programming (OOP)  
- **Application Type:** Console Application  
- **Architecture:** Modular / Multi-Header Design  

---

## 🎯 OOP Concepts Demonstrated

- Encapsulation  
- Inheritance  
- Polymorphism  
- Abstraction (Interfaces)  
- Separation of Concerns  
- Static Utility Classes  
- File Handling & Persistence  

---

## ⚠️ Design Notes

- Admin user cannot be deleted  
- Permissions control menu visibility and access  
- Centralized validation and input handling  
- Currency rates and conversions are extendable  
- Designed for educational and scalable use  

---

## 📬 Connect

- 🌐 GitHub: https://github.com/sara-alterkawi  
- 💼 LinkedIn: https://www.linkedin.com/in/sara-alterkawi-911526101/  