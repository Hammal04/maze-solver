# Maze Solver Using Recursion (C++)

A **C++ console-based Maze Solver** that uses **recursive backtracking** to find a valid path from a **Start point (S)** to an **Exit point (E)** in a maze.  
This project is designed as an **academic / reference assignment** demonstrating recursion, file handling, and backtracking algorithms.

---

## 📌 Problem Description

The program reads a maze from a text file (`input.txt`) and attempts to find a path from **S (Start)** to **E (Exit)**.

### Maze Symbols
| Symbol | Meaning |
|------|--------|
| `S` | Start position |
| `E` | Exit position |
| `#` | Wall / Blocked cell |
| `.` | Open path |
| `*` | Visited cell (used during recursion) |

The algorithm explores the maze using **Depth First Search (DFS)** with **recursion** and **backtracking**.

---

## 🚀 Features

- Reads maze input from a file
- Uses recursive backtracking to solve the maze
- Tracks and prints total recursive calls
- Displays:
  - Initial Maze
  - Recursive traversal steps
  - Final Maze with solution path
- Handles common errors gracefully

---

## 🛠️ Technologies Used

- **Language:** C++
- **Libraries:**
  - `<iostream>`
  - `<fstream>`
  - `<string>`
- **Concepts Used:**
  - Recursion
  - Backtracking
  - 2D Arrays
  - File Handling
  - Conditional Logic

---

## 📂 Project Structure

