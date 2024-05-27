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
        int a[n+1];

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        
        for (int i = 1; i <= n; i++)
        {
            if(a[1] != a[2]) {
                if(a[2] == a[3]) {
                    cout << 1 << endl;
                    break;
                } else if(a[1] == a[3]) {
                    cout << 2 << endl;
                    break;
                }
            } else if(a[i] != a[i+1]) {
                cout << i+1 << endl;
                break;
            }
        }
    }

    return 0;
}