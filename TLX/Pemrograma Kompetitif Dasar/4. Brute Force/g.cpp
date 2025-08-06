#include <bits/stdc++.h>
using namespace std;

int n, m, cnt, cnt2, cur, ans = INT_MIN;
vector<vector<char>> grid(25, vector<char>(25, 0)), grid2(25, vector<char>(25, 0));
vector<pair<int, int>> v;
bool visited[25][25], visited2[25][25];

void solve(int i, int j, int c) {
    if (i >= 0 and i < n and j >= 0 and j < m) {
        if (grid[i][j] == c and !visited[i][j]) {
            visited[i][j] = true;
            cnt++;
            v.push_back({i, j});
            solve(i + 1, j, c);
            solve(i - 1, j, c);
            solve(i, j + 1, c);
            solve(i, j - 1, c);
        }
    }
}

void solve2(int i, int j, int c) {
    if (i >= 0 and i < n and j >= 0 and j < m) {
        if (grid2[i][j] == c and !visited2[i][j]) {
            visited2[i][j] = true;
            cnt2++;
            solve2(i + 1, j, c);
            solve2(i - 1, j, c);
            solve2(i, j + 1, c);
            solve2(i, j - 1, c);
        }
    }
}


int main() {

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cnt = 0;
            v.clear();
            if(!visited[i][j]) solve(i, j, grid[i][j]);
            else continue;
            cnt = cnt * (cnt-1);

            grid2 = grid;
            for (int i = 0; i < v.size(); i++) {
                grid2[v[i].first][v[i].second] = '.';
            }

            for (int i = 0; i < m; i++) {
                for (int j = n-1; j >= 0; j--) {
                    if (grid2[j][i] == '.') {
                        for (int k = j-1; k >= 0; k--) {
                            if (grid2[k][i] != '.') {
                                swap(grid2[k][i], grid2[j][i]);
                                break;
                            }
                        }
                    }
                }
            }
            memset(visited2, 0, sizeof(visited2));
            cur = 0;
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    cnt2 = 0;
                    if (!visited2[i][j] && grid2[i][j] != '.') solve2(i, j, grid2[i][j]);
                    cur = max(cur, cnt2);
                }
            }

            cur = cur * (cur - 1);
            if (cnt == 0) continue;
            else ans = max(ans, cnt + cur);
        }
    }

    cout << ans << endl;

    return 0;
}
