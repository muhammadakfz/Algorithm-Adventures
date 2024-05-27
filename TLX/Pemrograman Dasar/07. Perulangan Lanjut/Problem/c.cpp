#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = i; j > 0; j--) {
            cout << cnt % 10;
            cnt++;
        }
        cout << endl;
    }

    cin.get();
    return 0;
}
