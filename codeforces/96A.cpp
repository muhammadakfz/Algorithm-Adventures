#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
 
    if(strstr(s.c_str(), "0000000") || strstr(s.c_str(), "1111111")) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}