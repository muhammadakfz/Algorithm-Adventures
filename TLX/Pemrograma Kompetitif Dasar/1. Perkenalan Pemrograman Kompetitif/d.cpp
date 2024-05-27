#include <bits/stdc++.h>
using namespace std;

int main() {

    string A, B;
    cin >> A >> B;

    for(int i = 0; i < A.size(); i++) {
        string temp = A.substr(0, i) + A.substr(i + 1);
        if(temp == B) {
            cout << "Tentu saja bisa!" << endl;
            return 0;
        }
    }

    cout << "Wah, tidak bisa :(" << endl;
    return 0;
}