#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
	cin >> t;
	while (t--) {
		string x;
		cin >> x;
		int digit = x[0] - '0' - 1;
		cout << digit * 10 + x.size() * (x.size() + 1) / 2 << endl;
	}

    return 0;
}