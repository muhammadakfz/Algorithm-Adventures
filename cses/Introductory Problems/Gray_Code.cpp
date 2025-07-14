#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<string> v;

    for (int i = 0; i < (1 << n); i++) {
        int gray = i ^ (i >> 1);
        string grayString = bitset<32>(gray).to_string();
        v.push_back(grayString.substr(32 - n));
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    return 0;
}
