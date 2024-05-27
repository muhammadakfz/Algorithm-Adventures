#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int t; while(cin >> t) v.push_back(t);
    int n = v.size();
    for (int i = n-1; i >= 0; i--) cout << v[i] << endl; 
    return 0;
}