#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    bool flag = 1;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] == 1) flag = 0;
    }

    if(flag) cout << "EASY" << endl;
    else cout << "HARD" << endl;

    return 0;
}