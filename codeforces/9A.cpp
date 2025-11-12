#include <bits/stdc++.h>
using namespace std;

int main() {

    int x, y;
    cin >> x >> y;
    
    int a = 7 - max(x, y);
    int g = __gcd(a,6);
    cout << a/g << '/' << 6/g;    

    return 0;
}
