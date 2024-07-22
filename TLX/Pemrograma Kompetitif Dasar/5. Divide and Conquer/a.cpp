#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, m;
int arr[500005];

int f(int x) {
    int ret = 0;
    for (int i = 0; i < n; i++) {
        ret += x / arr[i];
    }

    return ret;
}

signed main() {

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int batas = (1LL<<60)/n, x = 0, lower = batas, tengah = 0, num;
	while (x < lower) {
		tengah = x + (lower - x + 1) / 2;
		num = 0;
		num = f(tengah);
        if (num > m) lower = tengah - 1;
		else x = tengah;
	}

    int upper = x;
    x = 0, lower = batas;
	while (x < lower) {
		tengah = x + (lower - x) / 2;
		num = 0;
        num = f(tengah);
		if (num < m) x = tengah + 1;
		else lower = tengah;
	}
    
	cout << upper - lower + 1 << endl;


    return 0;
}