#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;
    
    long long r_terbaik = 1;
    long long c_terbaik = N;
    
    for (long long r = 1; r * r <= N; r++) {
        if (N % r == 0) {
            long long c = N / r;
            if (r <= c) {
                if ((c - r) < (c_terbaik - r_terbaik)) {
                    r_terbaik = r;
                    c_terbaik = c;
                }
            }
        }
    }
    
    cout << r_terbaik << " " << c_terbaik << endl;
    
    return 0;
}
