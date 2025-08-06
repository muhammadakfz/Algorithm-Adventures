#include <bits/stdc++.h>
using namespace std;

char board[8][8];
bitset<30> rw, ld, rd;
int ans = 0;

void backtrack(int c) {
    if (c == 8) {
        ans++;
        return;
    }
    for (int i = 0; i < 8; i++) {
        if (board[i][c] != '*' and !rw[i] and !ld[i-c+7] and !rd[i+c]) {
            rw[i] = ld[i-c+7] = rd[i+c] = 1;
            backtrack(c + 1);
            rw[i] = ld[i-c+7] = rd[i+c] = 0;
        }
    }
}

int main() {
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> board[i][j];
        }
    }

    backtrack(0);
    cout << ans << endl;
    

    
    return 0;
}
