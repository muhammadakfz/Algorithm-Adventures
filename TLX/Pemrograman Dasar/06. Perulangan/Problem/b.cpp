#include <iostream>
using namespace std;

int main() {
    int n, m, ans;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> m;
        ans += m;
    }

    cout << ans;

    cin.get();
    return 0;
} 
