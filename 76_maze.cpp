#include <iostream>
using namespace std;

// Constants for maximum dimensions of the maze
const int MAX_ROWS = 20;
const int MAX_COLS = 20;

// Define movement directions (up, down, left, right)
const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};

// Function to check if a cell is within the maze boundaries
bool isValid(int x, int y, int rows, int cols) {
    return x >= 0 && x < rows && y >= 0 && y < cols;
}

// Recursive function to find the shortest path in the maze
bool findShortestPath(int x, int y, int endX, int endY, int rows, int cols, int maze[MAX_ROWS][MAX_COLS], bool visited[MAX_ROWS][MAX_COLS]) {
    // Base case: if we've reached the end point
    if (x == endX && y == endY) {
        return true;
    }

    // Mark the current cell as visited
    visited[x][y] = true;

    // Try all possible directions from the current cell
    for (int i = 0; i < 4; i++) {
        int newX = x + dx[i];
        int newY = y + dy[i];

        // If the new cell is valid, not a wall, and not visited
        if (isValid(newX, newY, rows, cols) && maze[newX][newY] == 0 && !visited[newX][newY]) {
            // Recursively check the new cell
            if (findShortestPath(newX, newY, endX, endY, rows, cols, maze, visited)) {
                // If the path is found, print the current cell
                cout << "(" << x << ") -> ";
                return true;
            }
        }
    }

    // If no direction works, backtrack by marking the current cell as unvisited
    visited[x][y] = false;
    return false;
}

int main() {
    int rows, cols;

    // Get the dimensions of the maze from the user
    cout << "Enter the number of rows (<= " << MAX_ROWS << "): ";
    cin >> rows;
    cout << "Enter the number of columns (<= " << MAX_COLS << "): ";
    cin >> cols;

    // Check if the input dimensions are valid
    if (rows <= 0 || rows > MAX_ROWS || cols <= 0 || cols > MAX_COLS) {
        cout << "Invalid input for rows or columns." << endl;
        return 1;
    }

    int maze[MAX_ROWS][MAX_COLS];

    // Get the maze configuration from the user
    cout << "Enter the maze (0 for open path, 1 for wall):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> maze[i][j];
        }
    }

    int startX, startY, endX, endY;

    // Get the start and end points from the user
    cout << "Enter the end point (row and column): ";
    cin >> startX >> startY;
    cout << "Enter the start point (row and column): ";
    cin >> endX >> endY;

    // Check if the input start and end points are valid
    if (!isValid(startX, startY, rows, cols) || !isValid(endX, endY, rows, cols)) {
        cout << "Invalid input for start or end point. Points should be within the maze boundaries." << endl;
        return 1;
    }

    // Create a visited array to keep track of visited cells
    bool visited[MAX_ROWS][MAX_COLS] = {false};

    // Find and print the shortest path
    cout << "Shortest path from start to end:" << endl;
    if (findShortestPath(startX, startY, endX, endY, rows, cols, maze, visited)) {
        cout << endl;
    } else {
        cout << "No path found!" << endl;
    }

    return 0;
}
