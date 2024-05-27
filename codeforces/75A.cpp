#include <bits/stdc++.h>
using namespace std;

int main() {

    int a, b; cin >> a >> b;
    int tmp = a+b;
    string temp = to_string(tmp);

    for (int i = 0; i < temp.size(); i++) {
        if(temp[i] == '0') {
            temp.erase(i, 1);
            i--;
        }
    }

    string s1 = to_string(a), s2 = to_string(b);
    string s3 = "";
    int n = s1.size(), m = s2.size();
    for (int i = 0; i < n; i++) {
        if(s1[i] == '0') {
            s1.erase(i, 1);
            i--;
        }
    }

    for (int i = 0; i < m; i++) {
        if(s2[i] == '0') {
            s2.erase(i, 1);
            i--;
        }
    }

    // cout << s1 << " " << s2 << endl;

    int x = stoi(s1), y = stoi(s2);
    int z = x+y;

    s3 = to_string(z);

    if(s3 == temp) cout << "YES\n";
    else cout << "NO\n";
    
    
    return 0;
}