#include <bits/stdc++.h>
using namespace std;

bool identic(vector<vector<int>> a, vector<vector<int>> b) {
    bool ck = true;
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[0].size(); j++) {
            if (a[i][j] != b[i][j]) {
                ck = false;
                break;
            }
        } if (!ck) break;
    } return ck;
}

bool vertical(vector<vector<int>> a, vector<vector<int>> b) {
    bool ck = true;
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[0].size(); j++) {
            if (a[i][j] != b[i][a[0].size() - j - 1]) {
                ck = false;
                break;
            }
        } if (!ck) break;
    } return ck;
}

bool horizontal(vector<vector<int>> a, vector<vector<int>> b) {
    bool ck = true;
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[0].size(); j++) {
            if (a[i][j] != b[a.size() - i - 1][j]) {
                ck = false;
                break;
            }
        } if (!ck) break;
    } return ck;
}

bool rightdiagonals(vector<vector<int>> a, vector<vector<int>> b) {
    bool ck = true;
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[0].size(); j++) {
            if (a[i][j] != b[j][i]) {
                ck = false;
                break;
            }
        } if (!ck) break;
    } return ck;
}

bool leftdiagonals(vector<vector<int>> a, vector<vector<int>> b) {
    bool ck = true;
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[0].size(); j++) {
            if (a[i][j] != b[a[0].size() - j - 1][a.size() - i - 1]) {
                ck = false;
                break;
            }
        } if (!ck) break;
    } return ck;
}

int main() {

    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cin >> a[i][j];
    }

    cin >> n >> m;
    vector<vector<int>> b(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cin >> b[i][j];
    }

    if (identic(a, b)) cout << "identik\n";
    else if (vertical(a, b)) cout << "vertikal\n";
    else if (horizontal(a, b)) cout << "horisontal\n";
    else if (leftdiagonals(a, b)) cout << "diagonal kiri bawah\n";
    else if (rightdiagonals(a, b)) cout << "diagonal kanan bawah\n";
    else cout << "tidak identik\n";

    return 0;
}