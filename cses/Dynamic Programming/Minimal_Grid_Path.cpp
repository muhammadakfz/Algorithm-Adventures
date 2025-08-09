#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    int n; cin >> n;
 
    vector<vector<char>> grid(n+2, vector<char>(n+2, 'z' + 1));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> grid[i][j];
        }
    }
 
    vector<vector<int>> visited(n+2, vector<int>(n+2, 0));
    
    vector<pair<int,int>> pr;
 
    string s = "";
    s += grid[1][1];
    pr.push_back({1, 1});
    visited[1][1] = 1;
 
    for (int k = 2; k <= 2 * n - 1; k++) {
        char c = 'z' + 1;
 
        for (auto [x, y]: pr) {
            if (x + 1 <= n) c = min(c, grid[x+1][y]);
            if (y + 1 <= n) c = min(c, grid[x][y+1]);
        }
 
        s += c;
 
        vector<pair<int,int>> new_pr;
 
        for (auto [x, y]: pr) {
            if (x + 1 <= n && grid[x+1][y] == c && visited[x+1][y] != k) {
                new_pr.push_back({x+1, y});
                visited[x+1][y] = k; 
            }

            if (y + 1 <= n && grid[x][y+1] == c && visited[x][y+1] != k) {
                new_pr.push_back({x, y+1});
                visited[x][y+1] = k; 
            }
        }
 
        pr = new_pr;
    }
 
    cout << s << endl;
 
    return 0;
}