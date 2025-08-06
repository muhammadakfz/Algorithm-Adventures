#include <bits/stdc++.h>
#define int long long
using namespace std;

string str;
int nb, ns, nc;
int pb, ps, pc;
int r;

signed main() {

    cin >> str;
    int n = str.size();

    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;

    int b = 0, s = 0, c = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == 'B') b++;
        else if (str[i] == 'S') s++;
        else if (str[i] == 'C') c++;
    }

    int l = 0, h = 1e13;
    while (l < h) {
        int mid = (l + h + 1) / 2;
        int need_b = max(0LL, mid * b - nb);
        int need_s = max(0LL, mid * s - ns);
        int need_c = max(0LL, mid * c - nc);

        if (need_b * pb + need_s * ps + need_c * pc <= r) {
            l = mid;
        } else {
            h = mid - 1;
        }
    }

    cout << l << endl;


    return 0;
}
