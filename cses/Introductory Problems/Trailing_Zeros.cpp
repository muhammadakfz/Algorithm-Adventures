#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;   

    int count = 0;
    while (n > 0) {
        n /= 5; 
        count += n;
    }

    cout << count << endl;

    return 0;
}
