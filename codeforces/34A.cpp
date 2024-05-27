#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> v(n+1);
    for (int i = 1; i <= n; i++) cin >> v[i];
    int idxmn, idxmx, tmp = INT_MAX, ans;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            if(i != j) {
                ans = v[i] - v[j];
                if(ans < tmp) {
                    tmp = ans;
                    idxmn = i;
                    idxmx = j;
                }
            }
        }
    }

    cout << idxmn << " " << idxmx;    

    return 0;
}