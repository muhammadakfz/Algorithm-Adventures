#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(const string &s) {
    int left = 0;
    int right = s.size() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {

    int n, p;
    cin >> n >> p;

    p--;

    string s;
    cin >> s;

    if (p >= n/2) {
        reverse(s.begin(), s.end());
        p = n - p + 1;
    }

    int l = -1, r = -1;
    int total_numberChange = 0;
    for (int i = 0; i < n/2; i++) {
        int j = n - i - 1;
        if (s[i] != s[j]) {
            int diff = abs(s[i] - s[j]);
            total_numberChange += min(diff, 26-diff);
            if (l == -1) l = i;
            r = i;
        }
    }

    if (l == -1) {
        cout << 0 << endl;
        return 0;
    }

    int move = min(abs(p - l), abs(p - r)) + (r - l);
    cout << total_numberChange + move << endl;
    return 0;
}
