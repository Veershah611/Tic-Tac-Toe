# Tic-Tac-Toe Game in C

A robust, terminal-based implementation of the classic Tic-Tac-Toe game. This project focuses on clean code structure, modular programming, and user-friendly interaction within a CLI (Command Line Interface) environment.

---

## 📋 Table of Contents
* [Features](#-features)
* [Technical Implementation](#-technical-implementation)
* [How to Run](#-how-to-run)
* [Code Architecture](#-code-architecture)
* [Future Enhancements](#-future-enhancements)

---

## ✨ Features
* **Two-Player Gameplay:** Interactive mode for two local players with custom name inputs.
* **Input Mapping:** Uses a simple 'a-i' character mapping system, making it intuitive for users to pick a spot without typing coordinates.
* **Input Validation:** Built-in logic to handle invalid keystrokes and prevent players from overwriting occupied squares.
* **Win/Draw Detection:** Automatically evaluates the board state after every turn to detect horizontal, vertical, and diagonal victories.

---

## 🛠️ Technical Implementation
This project utilizes core C programming concepts:

* **2D Arrays:** The game board is managed using a $3 \times 3$ character array.
* **Pointers:** Used for efficient string handling of player names in functions.
* **Control Flow:** Implements a game loop using `while` logic and a `switch-case` block for coordinate mapping.
* **State Management:** Tracks turns, move counts, and winning status to ensure the game terminates correctly.



---

## 🕹️ How to Run

### Prerequisites
* A C compiler (GCC, Clang, or MSVC).

### Compilation
1. **Clone this repository:**
   ```bash
   git clone [https://github.com/your-username/tic-tac-toe-c.git](https://github.com/your-username/tic-tac-toe-c.git)
