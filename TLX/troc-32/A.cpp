#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    if((n % a == 0 and n % b != 0) || n % c == 0) cout << "YES";
    else cout << "NO";

    return 0;
}