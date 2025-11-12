#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<vector<int>> arr(1);
    arr.push_back({});

    while(n--) {
    string s;
    cin >> s;

    if(s == "add") {
        int L, X, Y;
        cin >> L >> X >> Y;
        arr[L].insert(arr[L].end(), Y, X);
    } else if (s == "new") {
        arr.push_back({});
    } else {
        int L, Z;
        cin >> L >> Z;
        cout << arr[L][Z-1] << endl;
    }
    }


    return 0;
}
