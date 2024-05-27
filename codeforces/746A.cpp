#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    string s; cin >> s;

    string str;

    if(n % 2 == 0) {
        for (int i = n-2; i >= 0; i-=2) str += s[i];
        for (int i = 1; i < n; i+=2) str += s[i];
    } else {
        for (int i = n-2; i >= 0; i-=2) str += s[i];
        for (int i = 0; i < n; i+=2) str += s[i];
    }

    cout << str << endl;
    

    return 0;
}