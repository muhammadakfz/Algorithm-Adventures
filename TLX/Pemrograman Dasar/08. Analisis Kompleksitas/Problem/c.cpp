#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, cnt = 0;
        cin >> n;

        for(int i = 2; i <= sqrt(n); i++) {
            if(n % i == 0) cnt++;
        }

        if(cnt < 2) cout << "YA\n";
        else cout << "BUKAN\n";
    }

    cin.get();
    return 0;
}
