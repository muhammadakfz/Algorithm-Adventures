#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    if (m % n == 0)
    {
        int ans = 0;
        int tmp = m / n;
        while (tmp % 2 == 0)
        {
            tmp /= 2;
            ans++;
        }
        while (tmp % 3 == 0)
        {
            tmp /= 3;
            ans++;
        }

        if (tmp == 1)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}