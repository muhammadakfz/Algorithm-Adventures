#include <bits/stdc++.h>
using namespace std;

int dx[] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

int main() {

    int n;
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n, -1));
    int x = 0, y = 0;
    
    queue<pair<int, int>> q;
    q.push({x, y});
    grid[x][y] = 0;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (int i = 0; i < 8; i++) {
            int new_x = x + dx[i];
            int new_y = y + dy[i];

            if (new_x >= 0 && new_x < n && new_y >= 0 && new_y < n && grid[new_x][new_y] == -1) {
                grid[new_x][new_y] = grid[x][y] + 1;
                q.push({new_x, new_y});
            }
        }
    }



    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
