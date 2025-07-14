#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, int from, int to, int other) {
    if (n == 1) {
        cout << from << " " << to << endl;
    } else {
        hanoi(n - 1, from, other, to);
        cout << from << " " << to << endl;
        hanoi(n - 1, other, to, from);
    }   

}

int main() {

    int n;
    cin >> n;

    int k = (1 << n) - 1;
    cout << k << endl;

    hanoi(n, 1, 3, 2);


    return 0;
}
