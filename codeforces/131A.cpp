#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    int n = s.size();

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (isupper(s[i]))
            cnt++;
    }

    if (cnt == n)
    {
        for (int i = 0; i < n; i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    else if (cnt == n - 1 && islower(s[0]))
    {
        s[0] = toupper(s[0]);
        for (int i = 1; i < n; i++)
        {
            s[i] = tolower(s[i]);
        }
    }

    cout << s << endl;

    // cAPSlOCK
    // cAPSlOCK

    // cAPS
    // Caps
    return 0;
}