#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> grid;
vector<vector<bool>> vis;
int n, m;

void bfs(int x, int y) {
    if(x < 0 or x >= n or y < 0 or y >= m) return;
    else if(grid[x][y] == '#' or vis[x][y]) return;
    vis[x][y] = true;
    bfs(x + 1, y);
    bfs(x - 1, y);
    bfs(x, y + 1);
    bfs(x, y - 1);
}

int main() {

    cin >> n >> m;

    grid.resize(n, vector<char>(m));
    vis.resize(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(grid[i][j] == '.' and !vis[i][j]) {
                bfs(i, j);
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
