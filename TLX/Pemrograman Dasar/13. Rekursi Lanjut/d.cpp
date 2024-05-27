#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e5 + 5;

int catat[MOD];
bool check[MOD];

int n, k;

void write(int x) {
    if(x == k) {
        for(int i = 0; i < k; i++) {
            cout << catat[i] << " ";
        } cout << endl;
    } else {
        for(int i = catat[x-1]+1; i <= n; i++) {
            if(catat[x-1] < i) {
                catat[x] = i;
                write(x+1);
            }
        }
    }
}


int main() {
    cin >> n >> k;
    write(0);
    return 0;
}