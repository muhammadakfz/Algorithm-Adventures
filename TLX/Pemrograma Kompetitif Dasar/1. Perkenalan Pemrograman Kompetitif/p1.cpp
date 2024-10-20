#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, x;
  cin >> n >> m >> x;

  vector<vector<int>> a(n, vector<int>(m));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
  }

  vector<vector<int>> tmp(101, vector<int>(101));

  while (x--)
  {
    string c;
    cin >> c;
    if (c == "|")
    {
      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j < m; j++)
        {
          tmp[i][j] = a[i][m - j - 1];
        }
      }
    }

    if (c == "_")
    {
      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j < m; j++)
        {
          tmp[i][j] = a[n - i - 1][j];
        }
      }
    }

    if (c == "90")
    {
      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j < m; j++)
        {
          tmp[j][n - i - 1] = a[i][j];
        }
      }

      swap(n, m);
    }

    if (c == "270")
    {
      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j < m; j++)
        {
          tmp[m - j - 1][i] = a[i][j];
        }
      }

      swap(n, m);
    }

    if (c == "180")
    {
      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j < m; j++)
        {
          tmp[i][j] = a[n - i - 1][m - j - 1];
        }
      }
    }

    a = tmp;
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}

/*
1 2 3
4 5 6
7 8 9

7 4 1
8 5 2
9 6 3
*/

/*
1 2 3
4 5 6
7 8 9

9 8 7
6 5 4
3 2 1
*/

/*
1 2 3
4 5 6
7 8 9

3 6 9
2 5 8
1 4 7
*/