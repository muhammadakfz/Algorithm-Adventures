#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
class Solution {
public:
    ll MOD = 1e9 + 7;
    map<int, vector<int>> prevTilings;
    ll solve(int n, int m) {
        // generate all possible prev tilings
        int limit = 1 << n;
        for (int tile = 0; tile < limit; tile++) {
            generateNextTilings(0, n, tile, 0);
        }
 
        // build the dp table: dp[tile] => how many ways to get to this tiling column
        vector<ll> prevRow(limit);
        vector<ll> dp(limit);
        prevRow[0] = 1;
        for (int row = 0; row < m; row++) {
            for (int tile = 0; tile < limit; tile++) {
                for (auto prevTile: prevTilings[tile])
                    dp[tile] = (dp[tile] + prevRow[prevTile]) % MOD;
            }
            swap(dp, prevRow);
            fill(dp.begin(), dp.end(), 0);
        }
        return prevRow[0];
    }
 
    void generateNextTilings(int idx, int n, int prev, int next){
        // use bit-masking to generate all possible next/prev tiling pairs
        if (idx == n) {
            prevTilings[next].push_back(prev);
            return;
        }
        // cell already filled
        if (((1 << idx) & prev) != 0) {
            generateNextTilings(idx + 1, n, prev, next);
            return;
        }
        // can we place a vertical bar
        if (idx < n - 1 && ((1 << (idx + 1)) & prev) == 0) {
            generateNextTilings(idx + 2, n, prev, next);
        }
        // place a horizontal bar
        next = next | (1 << idx);
        generateNextTilings(idx + 1, n, prev, next);
    }
};
 
int main() {
    // read the input
    int n, m;
    cin >> n >> m;
    Solution solver;
    cout << solver.solve(n, m);
 
    return 0;
}
