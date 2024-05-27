#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int arr[100001] = {0};

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        arr[x]++;
    } 

    int tmp = 0, modus = 0;
    for (int i = 0; i < 100001; i++) {
        if(arr[i] >= tmp) {
            tmp = arr[i];
            modus = i;
        }
    }
        
    cout << modus << "\n";

    return 0;
}