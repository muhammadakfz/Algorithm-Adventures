#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> a(n + 2, vector<int>(m + 2));
    for (int i = 0; i <= n + 1; i++)
        for (int j = 0; j <= m + 1; j++)
            if (i == 0 || j == 0 || i == n + 1 || j == m + 1)
                a[i][j] = 1;
            else
                cin >> a[i][j];

    int ans = 0;
    for (int j = 1; j <= m; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            ans = a[i - 1][j] * a[i + 1][j] * a[i][j - 1] * a[i][j + 1];
            if (ans == k)
            {
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }

    cout << "0 0" << endl;

    return 0;
}