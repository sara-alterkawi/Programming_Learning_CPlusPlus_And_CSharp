# 🏦 OOP Project 7 – Bank System  
**C++ Object-Oriented Console Application**

A complete console-based banking system developed using **C++ and Object-Oriented Programming (OOP)** principles.  
The system simulates real banking operations with authentication, authorization, client management, user management, and transaction handling.

The project is fully modular and divided into multiple header files, where each screen and core entity has its own responsibility.

---

## 📌 About the Project

The ** Bank System** is designed as a structured, extensible banking application that demonstrates real-world OOP design.

It includes:
- Secure login system
- Role-based access control (permissions)
- Client and user management
- Financial transactions
- Logging and history tracking
- Clean separation between screens, logic, and utilities

All screens and core logic are implemented as **separate header files**, ensuring clarity, reusability, and maintainability.

---

## 🔐 Authentication & Security

- Login with username and password
- Lock system after **3 failed login attempts**
- Logout and re-login support
- Login register logging *(Extension)*
- Password encryption in file *(Extension)*

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

- Deposit
- Withdraw
- Transfer between accounts
- Show total balances
- Transaction confirmation before execution
- Transfer logging and history

---

## 👤 User Management & Permissions

- List users
- Add new user
- Delete user (Admin cannot be deleted)
- Update user data
- Find user
- Full access or custom permission-based access
- Menu items appear based on permissions

---

## 🚫 Authorization Control

- Permission-based access to screens
- Access denied messages for unauthorized actions
- Fine-grained permission flags

---

## 🧠  & Validation

- Centralized  validation
- Safe numeric and text 
- Continuous validation loops
- Error handling without system crashes

---

## 🗂 Project Structure

### 📁 Source Files
- `OOP_Project_7__Bank_System.cpp`  
  Main entry point of the application.

---

### 📁 Header Files

#### 🔹 Core System
- `clsScreen.h` – Base class for all screens  
- `Global.h` – Global variables (Current User, etc.)
- `InterfaceCommunication.h` – Interface / abstraction layer *(Extension)*

---

#### 🔹 Authentication & Navigation
- `clsLoginScreen.h`
- `clsMainScreen.h`
- `clsLoginRegisterScreen.h`

---

#### 🔹 Client Screens
- `clsClientListScreen.h`
- `clsAddNewClientScreen.h`
- `clsDeleteClientScreen.h`
- `clsUpdateClientScreen.h`
- `clsFindClientScreen.h`

---

#### 🔹 Transaction Screens
- `clsTransactionsScreen.h`
- `clsDepositScreen.h`
- `clsWithdrawScreen.h`
- `clsTransferScreen.h`
- `clsTotalBalancesScreen.h`
- `clsTransfersRegisterScreen.h`

---

#### 🔹 User Management Screens
- `clsManageUsersScreen.h`
- `clsUserListScreen.h`
- `clsAddNewUserScreen.h`
- `clsDeleteUserScreen.h`
- `clsUpdateUserScreen.h`
- `clsFindUserScreen.h`

---

#### 🔹 Core Entities
- `clsBankClient.h`
- `clsUser.h`
- `clsPerson.h`

---

#### 🔹 Utilities & Helpers
- `clsValidate.h`
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

- Admin user cannot be deleted.
- Permissions control menu visibility and access.
- Validation logic is centralized.
- Extensions are optional and modular.
- Designed for educational and scalable use.

---

## 📬 Connect

- 🌐 GitHub: https://github.com/sara-alterkawi  
- 💼 LinkedIn: https://www.linkedin.com/in/sara-alterkawi-911526101/
