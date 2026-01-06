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

```

Maze-Solver/
│── main.cpp
│── input.txt
│── README.md

```

---

## ⚙️ Algorithm Explanation

1. The maze is read line-by-line from `input.txt`
2. The program locates:
   - Start cell (`S`)
   - Exit cell (`E`)
3. The recursive function `findPath()`:
   - Checks bounds and blocked cells
   - Marks visited cells with `*`
   - Recursively explores all four directions:
     - Right
     - Left
     - Down
     - Up
4. If no path is found, the function backtracks and restores cells
5. When `E` is found, recursion stops and the solution is printed

---

## ▶️ How to Run the Program

### Step 1: Create Input File
Create a file named **`input.txt`** in the same folder.

### Example `input.txt`
```

##########
#S..#....#
#.#.#.##.#
#.#...#E.#
##########

````

---

### Step 2: Compile
```bash
g++ main.cpp -o maze_solver
````

### Step 3: Execute

```bash
./maze_solver
```

---

## 📸 Sample Output

```
Initial Maze:
##########
#S..#....#
#.#.#.##.#
#.#...#E.#
##########

Tracing recursive calls...

Entering cell (1,1)
Entering cell (1,2)
...
Path found!

Final Maze:
##########
#S**#****#
#*#*#*##*#
#*#***#E*#
##########

Total recursive calls: 47
```

---

## 📈 Complexity Analysis

* **Time Complexity:** O(rows × columns)
* **Space Complexity:** O(rows × columns) (recursion stack)

---

## ❗ Error Handling

The program checks for:

* Missing or unreadable `input.txt`
* Empty input file
* Missing `S` (Start) or `E` (Exit) in the maze

---

## 🤝 Contribution

This project is for academic purposes, but contributions are welcome:

1. Fork the repository
2. Create a new branch
3. Commit your changes
4. Open a Pull Request

---

## 📄 License

This project is licensed under the **MIT License**.

---

## 👤 Author

**Name:** Hammal Baloch
**Language:** C++
**Project Type:** Academic / Reference Assignment

```

