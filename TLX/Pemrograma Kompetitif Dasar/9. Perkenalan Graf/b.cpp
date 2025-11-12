#include <bits/stdc++.h>
using namespace std;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

vector<vector<char>> grid;
pair<int,int> bebek, kucing;
vector<vector<bool>> visitedB, visitedK;

void bfs(pair<int,int> start, vector<vector<bool>> &visited) {
    int n = grid.size();
    int m = grid[0].size();
    queue<pair<int,int>> q;

    visited[start.first][start.second] = true;
    q.push(start);

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                if (grid[nx][ny] != '#' && !visited[nx][ny]) {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
    }
}

int main() {
    int m, n; 
    cin >> m >> n;

    grid.resize(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'B') bebek = {i, j};
            if (grid[i][j] == 'K') kucing = {i, j};
        }
    }

    visitedB.assign(n, vector<bool>(m, false));
    visitedK.assign(n, vector<bool>(m, false));

    bfs(bebek, visitedB);
    bfs(kucing, visitedK);

    int areaB = 0, areaK = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '#') continue;
            if (visitedB[i][j]) areaB++;
            if (visitedK[i][j]) areaK++;
        }
    }

    if (areaB > areaK) cout << "B " << (areaB - areaK) << "\n";
    else if (areaK > areaB) cout << "K " << (areaK - areaB) << "\n";
    else cout << "SERI\n";

    return 0;
}
