#include <bits/stdc++.h>
using namespace std;

int a, b, c;
int sum1, sum2, sum3;

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> a >> b >> c;
        sum1 += a;
        sum2 += b;
        sum3 += c; 
    }

    if((sum1 == 0) and (sum2 == 0) and (sum3 == 0)) cout << "YES";
    else cout << "NO";

    return 0;
}