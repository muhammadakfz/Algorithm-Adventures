#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    int ans = 0, tmp = 1, cnt = 0;
    while (cnt <= n)
	{
		ans++;
		cnt += (ans*(ans+1))/2;
	}

    cout << ans-1 << endl;

    return 0;
}