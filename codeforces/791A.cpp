#include <bits/stdc++.h>
using namespace std;

int main() {
    int limak, bob;
    cin >> limak >> bob;

    int cnt = 0;
    while(limak <= bob) {
        limak *= 3;
        bob *= 2;
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}