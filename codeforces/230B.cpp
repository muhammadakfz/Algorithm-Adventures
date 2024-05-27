#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MAXN = 1e6 + 5;
int prime[MAXN];

bool check(int n) {
    double x = sqrt(n);
    if(x == (int)sqrt(n)) return 1;
    else return 0;
}

signed main() {

    prime[0] = prime[1] = 1;
    for(int i = 2; i < MAXN; i++){
        if(!prime[i]){
            for(int j = i * i; j < MAXN; j += i){
                prime[j] = 1;
            }
        }
    }
 
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(check(n) and !prime[(int)sqrt(n)]) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}