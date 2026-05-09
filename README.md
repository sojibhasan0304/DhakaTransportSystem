# 🚌 Dhaka City Transport System

## 📌 Project Overview

The **Dhaka City Transport System** is a C++ Object-Oriented Programming project designed to manage a basic public transportation system for Dhaka city.

This project is developed based on a **UML use case diagram** and **UML class diagram**. The system includes two main users: **Customer** and **Employee**. Customers can register, log in, buy tickets, view routes, make complaints, view notices, and pay penalties. Employees can manage buses, assign buses to routes, post notices, review complaints, and resolve complaints.

The main goal of this project is to demonstrate proper use of **OOP concepts** such as encapsulation, inheritance, polymorphism, abstraction, class relationships, and modular code design.


## 🎯 Project Objectives

The main objectives of this project are:

- ✅ To design a transport management system using C++
- ✅ To convert UML diagrams into real C++ classes
- ✅ To apply Object-Oriented Programming principles
- ✅ To manage customers, employees, buses, routes, and tickets
- ✅ To create a simple console-based system
- ✅ To practise clean project structure using `.h` and `.cpp` files
- ✅ To prepare the project for future database or GUI integration
- ✅ To create a Database my using MySQL for customers and employees and verify the data from database.
- ✅ To create a online paymetn getway by using card or bank. 

---

## 👥 System Users

The system has two main types of users:

### 👤 Customer

A customer can use the transport system for travel-related services.

Customer activities include:

- 📝 Register account
- 🔐 Login
- 🚪 Logout
- 🗺️ View available routes
- 🚌 View bus information
- 🎫 Buy ticket
- 📜 View ticket history
- 📨 Make complaint
- 📢 View notice
- 💳 Make payment
- ⚠️ Pay penalty

### 👨‍💼 Employee

An employee manages transport-related administrative activities.

Employee activities include:

- 👤 Create employee account
- 🚌 Add bus
- ❌ Delete bus
- 🔁 Assign bus to route
- 🗂️ View bus inventory by zone
- 📊 View bus type breakdown
- 🏢 View garage bus list
- 📢 Post notice
- 📨 Review complaints
- ✅ Resolve complaints

---

## ✨ Main Features

### 🔐 Authentication System

The system includes a simple authentication module.

Features:

- User login
- User logout
- Role-based access
- Customer and employee separation

Example roles:

```cpp
enum class Role {
    Customer,
    Employee
};
