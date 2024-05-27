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
        int n = s.size();

        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
            {
                if (s[i + 1] != 'a')
                {
                    if (i == 0 || s[i - 1] != 'a')
                    {
                        s[i] = 'a';
                        continue;
                    }
                }
                if (s[i + 1] != 'b')
                {
                    if (i == 0 || s[i - 1] != 'b')
                    {
                        s[i] = 'b';
                        continue;
                    }
                }
                if (s[i + 1] != 'c')
                {
                    if (i == 0 || s[i - 1] != 'c')
                    {
                        s[i] = 'c';
                        continue;
                    }
                }
            }
            else if (s[i] == s[i + 1])
            {
                flag = true;
                break;
            }
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                flag = true;
                break;
            }
        }

        if (flag)
            cout << "-1\n";
        else
            cout << s << "\n";
    }

    return 0;
}