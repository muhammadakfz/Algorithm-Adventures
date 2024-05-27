#include <bits/stdc++.h>
using namespace std;

int arr[10001];

int main() {
    int n; cin >> n;
    vector<int> a(n), v;
    for (int i = 0; i < n; i++) cin >> a[i];
    
    int m; cin >> m;
    vector<int> b(m);
    int cnt = 0, tmp = 0;


    for (int i = 0; i < m; i++) cin >> b[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(b[j]%a[i]==0){
                int x = b[j]/a[i];
                arr[x]++;
            }
        }
    }

    for (int i = 10001; i > 0; i--) {
        if(arr[i]) {
            cout << arr[i];
            return 0;
        }
    }
    


    return 0;
}