#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
 
// Check if cell (x, y) is valid or not
bool isValidCell(int x, int y, int N) {
    return !(x < 0 || y < 0 || x >= N || y >= N);
}
 
void countPaths(vector<vector<int>> const &maze, int x, int y, pair<int, int> &dest,
            vector<vector<bool>> &visited, int& count)
{
    // if destination is found, increment the path count
    if (x == dest.first && y == dest.second)
    {  
        count++;
        return;
    }
 
    // mark the current cell as visited
    visited[x][y] = 1;
 
    // `N × N` matrix
    int N = maze.size();
 
    // if the current cell is a valid and open cell,
    if (isValidCell(x, y, N) && maze[x][y])
    {
        // go down (x, y) ——> (x + 1, y)
        if (x + 1 < N && !visited[x + 1][y]) {
            countPaths(maze, x + 1, y, dest, visited, count);
        }
 
        // go up (x, y) ——> (x - 1, y)
        if (x - 1 >= 0 && !visited[x - 1][y]) {
            countPaths(maze, x - 1, y, dest, visited, count);
        }
 
        // go right (x, y) ——> (x, y + 1)
        if (y + 1 < N && !visited[x][y + 1]) {
            countPaths(maze, x, y + 1, dest, visited, count);
        }
 
        // go left (x, y) ——> (x, y - 1)
        if (y - 1 >= 0 && !visited[x][y - 1]) {
            countPaths(maze, x, y - 1, dest, visited, count);
        }
    }
 
    // backtrack from the current cell and remove it from the current path
    visited[x][y] = 0;
}
 
// Wrapper over countPaths()
int findCount(vector<vector<int>> const &maze, pair<int, int> &src,
        pair<int, int> &dest)
{
    // `N × N` matrix
    int N = maze.size();
 
    // base case
    if (N == 0 || maze[src.first][src.second] == 0 ||
            maze[dest.first][dest.second] == 0) {
        return 0;
    }
 
    // stores number of unique paths from source to destination
    int count = 0;
 
    // 2D matrix to keep track of cells involved in the current path
    vector<vector<bool>> visited;
    visited.resize(N, vector<bool>(N));
 
    // start from source cell
    countPaths(maze, src.first, src.second, dest, visited, count);
 
    return count;
}
 
int main()
{
    // input matrix
    vector<vector<int>> maze =
    {
        { 1, 1, 1 },
        { 1, 1, 1 },
        { 1, 1, 1 }
    };
 
    // source cell
    pair<int,int> src = make_pair(0, 0);
 
    // destination cell
    pair<int,int> dest = make_pair(2, 2);
 
    cout << "The total number of unique paths are " << findCount(maze, src, dest);
 
    return 0;
}