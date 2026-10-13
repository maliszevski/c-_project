# IO_CONTROLLER

A C++ console application designed to simulate controlling relay states (turning outputs ON/OFF, inspecting their current states, and safe input handling).

---

## Features

- **Activate Outputs (R1–R3):** Turn on selected relays with built-in checks to prevent redundant toggling if already active.
- **Disable Outputs:** Safely turn off specific relays with input range validation.
- **Status Overview:** View the real-time status of all relays (`ON` / `OFF`).
- **Robust Input Handling:** Safe user input parsing using `std::cin.fail()` to prevent invalid state loops.

---

## Tech Stack & Requirements

- **Language:** C++ (C++17 or later recommended)
- **Compiler:** `g++` / `clang++`

---

## About This Project

This is my very first application written in C++. It was created as a learning project to understand the basics of:
- Object-Oriented Programming (classes, encapsulation, methods)
- Project structure (`include/` headers and `src/` source files)
- Safe user input handling and state management in CLI applications
