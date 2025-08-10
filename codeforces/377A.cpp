#include <bits/stdc++.h>
using namespace std;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<char>> a(n, vector<char>(m));
    pair<int, int> s; 
    
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char c;
            cin >> c;
            if (c == '.') {
                a[i][j] = 'X';
                s = {i, j}; 
                cnt++;
            } else {
                a[i][j] = c;
            }
        }
    }

    int sisa = cnt - k;
    queue<pair<int, int>> q;
    q.push(s); 
    
    while (!q.empty() && sisa > 0) {
        auto [x, y] = q.front();
        q.pop();
        
        if (a[x][y] == '.') continue;
        
        a[x][y] = '.'; 
        sisa--;
        
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && a[nx][ny] == 'X') {
                q.push({nx, ny});
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}