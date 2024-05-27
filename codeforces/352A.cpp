#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    int cnt5 = 0, cnt0 = 0;

    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if(x == 5) cnt5++;
        else cnt0++;
    }

    string s = "";
    for (int i = 0; i < (cnt5/9) * 9; i++) s += "5";    
    for (int i = 0; i < cnt0; i++) s += "0";
    
    if(cnt5 >= 9 and cnt0 > 0) cout << s << endl;
    else if(cnt0 > 0) cout << 0 << endl;
    else cout << -1 << endl;
    

    return 0;
}