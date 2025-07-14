#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {

    string s; 
    cin >> s;

    int n = s.size();   

    sort(s.begin(), s.end());
    vector<string> v;
    do {
        v.push_back(s);
    } while (next_permutation(s.begin(), s.end()));

    cout << v.size() << endl;
    for (auto &str : v) {
        cout << str << endl;
    }
        
    return 0;
}
