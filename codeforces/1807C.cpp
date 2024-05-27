#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<pair<int, int>> cnt(26);
        for (int i = 0; i < n; i++)
        {
            if (i % 2)
            {
                cnt[s[i] - 'a'].first++;
            }
            else
            {
                cnt[s[i] - 'a'].second++;
            }
        }
        int ok = 1;
        for (int i = 0; i < 26; i++) {
            ok &= (cnt[i].first == 0 || cnt[i].second == 0);
        }
        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}