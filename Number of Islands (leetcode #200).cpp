// Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.

// An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.


#include <bits/stdc++.h>
#include <queue>
class Solution {
public:
    void breadthFirstSearch(int n,int m, vector<vector<int>>& visited,
                            vector<vector<char>>& grid, int row, int col) {
       if (row < 0 || row >= n || col < 0 || col >= m || grid[row][col] == '0' || visited[row][col] == 1) {
            return;
        } else 
        {
            visited[row][col] = 1;
            breadthFirstSearch(n,m, visited, grid, row + 1, col);
            breadthFirstSearch(n,m, visited, grid, row, col + 1);
            breadthFirstSearch(n,m, visited, grid, row - 1, col);
            breadthFirstSearch(n,m, visited, grid, row, col - 1);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        if (n == 0) return 0; // Handle empty grid
        int m = grid[0].size();
        vector<vector<int>> visited(n, vector<int>(m, 0));
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1' && visited[i][j] == 0) {
                    count++;
                    breadthFirstSearch(n, m, visited, grid, i, j);
                }
            }
        }
        return count;
    }
};