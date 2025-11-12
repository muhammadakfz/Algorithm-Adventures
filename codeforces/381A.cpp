#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n];
    int sereja = 0, dima = 0;
    int l = 0, r = n - 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool serejaTurn = true;

    while (l <= r)
    {
        if (serejaTurn)
        {
            if (a[l] > a[r])
            {
                sereja += a[l];
                l++;
            }
            else
            {
                sereja += a[r];
                r--;
            }
            serejaTurn = false;
        }
        else
        {
            if (a[l] < a[r])
            {
                dima += a[r];
                r--;
            }
            else
            {
                dima += a[l];
                l++;
            }
            serejaTurn = true;
        }
    }


    cout << sereja << " " << dima << endl;


    return 0;
}
