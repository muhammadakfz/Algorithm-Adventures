#include <bits/stdc++.h>
using namespace std;

int main() {

    string s = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string str;
    
    while (getline(cin, str)) {
        if(str == "") break;
        for(int i = 0; i < str.size(); i++) {
            if(str[i] == ' ') cout << " ";
            else cout << s[s.find(str[i])-1];
        }
        cout << endl;
    }

    return 0;
}