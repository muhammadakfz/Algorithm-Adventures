#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    
    int min_pos = max(a + 1, n - b);
    int max_pos = n;
    int ans = max(0, max_pos - min_pos + 1);
    
    cout << ans << endl;
    
    return 0;
}