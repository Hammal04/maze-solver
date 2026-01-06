#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int MAX = 100;   // maximum maze size
char maze[MAX][MAX];   // fixed-size 2D array
int rows = 0, cols = 0;
int startRow = 0, startCol = 0;
int exitRow = 0, exitCol = 0;
int recursiveCalls = 0;

bool findPath(int row, int col);
void printMaze();

int main() {
    // Read maze from input.txt
    ifstream fin("input.txt");
    if (!fin) {
        cout << "Error: Could not open input File\n";
        return 0;
    }
    string line;
    while (getline(fin, line)) {
        for (int c = 0; c < (int)line.size(); c++) {
            maze[rows][c] = line[c];
        }
        rows++;
    }
    fin.close();

    if (rows == 0) {
        cout << "Error: input is empty\n";
        return 0;
    }

    // Set cols from the first line only
    cols = (int)line.size();

    // Find S and E
    bool foundStart = false, foundExit = false;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            if (maze[r][c] == 'S') {
                startRow = r; startCol = c; foundStart = true;
            } else if (maze[r][c] == 'E') {
                exitRow = r; exitCol = c; foundExit = true;
            }
        }
    }

    if (!foundStart || !foundExit) {
        cout << "Error: Maze must contain both S (start) and E (exit)\n";
        return 0;
    }

    cout << "Initial Maze:\n";
    printMaze();
    cout << "\nTracing recursive calls...\n\n";

    bool pathFound = findPath(startRow, startCol);

    // Ensure start remains visible
    maze[startRow][startCol] = 'S';

    cout << "\nFinal Maze:\n";
    printMaze();

    if (!pathFound) {
        cout << "No path found!\n";
    }
    cout << "\nTotal recursive calls: " << recursiveCalls << '\n';

    return 0;
}


// Print the maze to console
void printMaze() {
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cout << maze[r][c];
        }
        cout << '\n';
    }
}

bool findPath(int row, int col) {
    recursiveCalls++;
    cout << "Entering cell (" << row << "," << col << ")\n";

    // Bounds check
    if (row < 0 || col < 0 || row >= rows || col >= cols) {
        cout << "Cell (" << row << "," << col << ") is out of bounds\n";
        return false;
    }

    char ch = maze[row][col];
    // Invalid cell (blocked or already visited)
    if (ch == '#' || ch == '*') {
        cout << "Cell (" << row << "," << col << ") is blocked\n";
        return false; }
    // Exit found
    if (ch == 'E') {
        cout << "Path found!\n";
        return true; }
    // Mark as visited
    maze[row][col] = '*';

    // Explore directions
    if (findPath(row, col + 1)) return true; // Right
    if (findPath(row, col - 1)) return true; // Left
    if (findPath(row + 1, col)) return true; // Down
    if (findPath(row - 1, col)) return true; // Up

    // Backtrack: restore empty cells
    cout << "Backtracking from (" << row << "," << col << ")\n";
    maze[row][col] = '.';  // Always restore

    return false;
}
