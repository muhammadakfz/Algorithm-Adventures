#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n % 2 == 0) {
        n /= 2;
        // cout << n << endl;
    }

    if(n != 1) cout << "bukan" << endl;
    else cout << "ya" << endl;

    cin.get();
    return 0;
}
