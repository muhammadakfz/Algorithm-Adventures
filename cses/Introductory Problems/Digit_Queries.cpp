#include <bits/stdc++.h>
using namespace std;

string s;
void generateNumberString(int n) {
    s = "";
    for (int i = 1; i <= n; i++) {
        s += to_string(i);
    }
}

int main() {

    int t;
    cin >> t;
    generateNumberString(1000000);
    while(t--) {
        int n;
        cin >> n;
        cout << s[n-1] << endl;
    }

    

    return 0;
}
