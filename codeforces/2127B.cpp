// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n, x;
//         cin >> n >> x;
//         string s;
//         cin >> s;

//         if (x == 1 || x == n) {
//             cout << 1 << "\n";
//             continue;
//         }

//         x--; // 0-based
//         int inf = 1e9;
//         int wl = -inf, wr = inf;

//         for (int i = x - 1; i >= 0; i--) {
//             if (s[i] == '#') {
//                 wl = i;
//                 break;
//             }
//         }

//         for (int i = x + 1; i < n; i++) {
//             if (s[i] == '#') {
//                 wr = i;
//                 break;
//             }
//         }

//         if (wl == -inf && wr == inf) {
//             cout << 1 << "\n";
//             continue;
//         }

//         cout << max(min(x + 1, n - wr + 1), min(wl + 2, n - x)) << "\n";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
#define int long long
using namespace std;
 
// bool check(int d, int wl, int el, int wr, int er) {
//     return (d >= wl + min(d, el)) || (d >= wr + min(d, er));
// }
 
signed main() {
 
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        if (x == 1 || x == n) {
            cout << 1 << "\n";
            continue;
        }
        
        x--;
 
        string s;
        cin >> s;
 
        int wl = 0, el = 0, wr = 0, er = 0;
 
        for (int i = 0; i < x; i++) {
            if (s[i] == '#') wl++;
            else el++;
        }
 
        for (int i = x + 1; i < n; i++) {
            if (s[i] == '#') wr++;
            else er++;
        }
 
        int time = 1 + min(wl + min(wl, el), wr + min(wr, er));
        vector<int> keluar;
 
        if (el > 0) {
            if (wr == 0) keluar.push_back(1);
            else keluar.push_back(time); 
        }
 
        if (er > 0) {
            if (wl == 0) keluar.push_back(1);
            else keluar.push_back(time);
        }
 
        // if (keluar.empty()) {
        //     cout << 0 << '\n';
        //     continue;
        // }
 
        
        // int l = 0, r = n, ans = n;
        
        // while (l <= r) {
        //     int mid = l + (r - l) / 2;
        //     if (check(mid, wl, el, wr, er)) {
        //         ans = mid;
        //         r = mid - 1;
        //     } else {
        //         l = mid + 1;
        //     }
        // }
        
        // cout << ans + 1 << endl;
 
        cout << *min_element(keluar.begin(), keluar.end()) << '\n';
    }
 
    return 0;
}