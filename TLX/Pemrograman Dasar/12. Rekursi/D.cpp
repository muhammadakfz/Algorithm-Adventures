#include <bits/stdc++.h>
using namespace std;

bool check_polindrome(string s, int l, int r) {
    if(l >= r) return true;
    if(s[l] == s[r]) return check_polindrome(s, l+1, r-1);
    else return false;
}

bool polindrome(string s) {
    int len = s.length();
    if(len == 0 || len == 1) return true;
    return check_polindrome(s, 0, len-1);
}

int main() {

    string s; cin >> s;
    if(polindrome(s)) cout << "YA\n";
    else cout << "BUKAN\n";
    
    return 0;
}