#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        string s;
        cin >> s;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] - '0' >= d)
            {
                cout << s[i];
            }
            else
            {
                cout << d;
                for (int j = i; j < n; ++j)
                {
                    cout << s[j];
                }
                cout << '\n';
                goto end;
            }
        }

        cout << d << '\n';

    end:;
    }

    return 0;
}