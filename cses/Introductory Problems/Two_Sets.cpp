#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {

    int n;
    cin >> n;  

    int sum = n * (n + 1) / 2;
    if (sum % 2 != 0) {
        cout << "NO" << endl;
        return 0;
    } else {
        cout << "YES" << endl;
        
        vector<int> set1, set2;
        int half_sum = sum / 2;
        for (int i = n; i > 0; --i) {
            if (half_sum >= i) {
                set1.push_back(i);
                half_sum -= i;
            } else {
                set2.push_back(i);
            }
        }

        cout << set1.size() << endl;
        for (int num : set1) {
            cout << num << " ";
        }

        cout << endl;
        cout << set2.size() << endl;
        for (int num : set2) {
            cout << num << " ";
        } 

        cout << endl;
        return 0;
    }

    return 0;
}
