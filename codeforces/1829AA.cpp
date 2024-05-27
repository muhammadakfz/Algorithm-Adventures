#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        string tmp = "codeforces";
        int ans = 0;
        for (int i = 0; i < 10; i++)
        {
            if (s[i] != c[i])
            {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}