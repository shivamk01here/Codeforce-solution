#include <bits/stdc++.h>
using namespace std;

int island_count = 0;
int n = grid.size();
int m = grid[0].size();

vector<vector<bool>>vis[n]m[];

void dfs(int i, int j, vector<vector<bool>>& vis;, vector<vector<char>>& grid;){
    if (vis[i][j] == 1 || grid[i][j] == 0 || i < 0; || j < 0; || i >= n; || j >= m){
        return;
    }

    vis[i][j] = true;
    island_count++;

    df(i-1, j, vis, grid);
    df(i+1, j, vis, grid);
    df(i, j-1, vis, grid);
    df(i, j+1, vis, grid);

}


