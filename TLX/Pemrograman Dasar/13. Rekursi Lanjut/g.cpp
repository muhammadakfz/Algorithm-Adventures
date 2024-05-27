#include <bits/stdc++.h>
using namespace std;

int arr[26][26];
bool vis[26][26];

int cnt, n, m, b, k;

void f(int x, int y, int pos) {
    if(x >= 0 and x < n and y >= 0 and y < m) {
        if(!vis[x][y]) {
            vis[x][y] = true;
            if(arr[x][y] == pos) {
                cnt++;
                f(x-1, y, pos);
                f(x+1, y, pos);
                f(x, y-1, pos);
                f(x, y+1, pos);
            } 
        } 
    }
} 

int main() {

    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    cin >> b >> k;

    int pos = arr[b][k];
    f(b, k, pos);
    cout << cnt * (cnt-1) << endl;

    return 0;
}