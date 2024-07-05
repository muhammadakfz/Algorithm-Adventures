#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, x;
    cin >> n >> x;

    vector<int> w(n);
    vector<pair<double, int>> p(n);

    for (int i = 0; i < n; i++)
        cin >> w[i];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first;
        p[i].first /= w[i];
        p[i].second = i;
    }

    sort(p.rbegin(), p.rend());
    double ans = 0;

    for (int i = 0; i < n; i++)
    {
        int j = p[i].second;
        int weight = w[j];
        for (int k = 0; k < weight; k++)
        {
            if (x > 0)
            {
                ans += p[i].first;
                x--;
            }
        }

        if (x <= 0)
        {
            break;
        }
    }

    cout << fixed << setprecision(5) << ans << endl;

    return 0;
}