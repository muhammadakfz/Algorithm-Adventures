#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    int n;
    cin >> n;

    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int posisi = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '*')
        {
            posisi = i;
            break;
        }
    }

    if (s.size() == 1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << endl;
        }
        return 0;
    }
    else
    {
        vector<string> ans;
        string prefix = s.substr(0, posisi);
        string suffix = s.substr(posisi + 1, s.size() - posisi - 1);

        for (int i = 0; i < n; i++)
        {
            if (v[i].size() < s.size() - 1)
                continue;

            string v_prefix = v[i].substr(0, posisi);
            string v_suffix = v[i].substr(v[i].size() - (s.size() - posisi - 1), s.size() - posisi - 1);

            if (v_prefix == prefix && v_suffix == suffix)
            {
                cout << v[i] << endl;
            }
        }
    }

    return 0;
}