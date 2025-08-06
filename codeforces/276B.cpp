#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    int odd_count = 0;
    for (auto& p : freq) {
        if (p.second % 2 == 1) {
            odd_count++;
        }
    }

    if (odd_count <= 1) {
        // String sudah palindrome, pemain yang harus move kalah
        cout << "First" << endl;  // Alice menang
    } else {
        // Perlu (odd_count - 1) langkah untuk mencapai palindrome
        if ((odd_count - 1) % 2 == 1) {
            cout << "Second" << endl;   // Alice menang
        } else {
            cout << "First" << endl;  // Bob menang
        }
    }
    

    return 0;
}
