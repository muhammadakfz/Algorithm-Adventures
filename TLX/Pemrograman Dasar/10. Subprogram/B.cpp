#include <bits/stdc++.h>
using namespace std;

int n, q;
int arr[2][1001];

int main() {

    cin >> n;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) cin >> arr[i][j];
    }

    cin >> q;
    for (int i = 0; i < q; i++) {
        int x, y;
        char buff1[5], buff2[5];
        cin >> buff1 >> x >> buff2 >> y;

        int a = buff1[0] - 'A';
        int b = buff2[0] - 'A';

        x--, y--;
        swap(arr[a][x], arr[b][y]);
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j];
            if(j+1 < n) cout << " ";
        } cout << "\n";
    }

    return 0;
}