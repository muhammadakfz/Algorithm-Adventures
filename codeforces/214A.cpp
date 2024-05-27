#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    int mx = max(n, m);
    int cnt = 0;

    for (int i = 0; i <= mx; i++) {
        for (int j = 0; j <= mx; j++) {
            if(i*i + j == n and  j*j+i == m) cnt++;   
        }
    }

    cout << cnt;   

    return 0;
}