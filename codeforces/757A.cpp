#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    map<char,int> mp;

    for(char i: s) mp[i]++;

    int ans = min({mp['B'], mp['u']/2, mp['l'], mp['b'], mp['a']/2, mp['s'], mp['r']});

    cout << ans << "\n";

    return 0;
}