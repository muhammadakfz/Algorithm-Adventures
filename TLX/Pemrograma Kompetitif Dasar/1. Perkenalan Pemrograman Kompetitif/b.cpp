#include <bits/stdc++.h>
using namespace std;


int R, C;
char arr[21][9];

int boom() {
    int barisTerakhir = 0;
    for(int i = 1; i <= R; i++) {
        bool check = true;
        for(int j = 1; j <= C; j++) {
            if(arr[i][j] == '0') {
                check = false;
                break;
            }
        }

        if(check) {
            barisTerakhir = i;
            for(int j = 1; j <= C; j++) {
                arr[i][j] = '0';
            }
        }
    }

    return barisTerakhir;
}

int countAbove(int lastR, int col) {
    int count = 0;
    for (int i = 1; i <= lastR; i++) {
        if(arr[i][col] == '1') {
            count++;
        }
    }

    return count;
}


int barisTerakhir(int lastR, int col) {
    for (int i = lastR; i <= R; i++) {
        if(arr[i+1][col] == '1' || i == R) {
            return i;
        }
    }
}


void runtuh(int lastR, int col, int blackAbove) {
    for(int i = lastR; i >= 1; i--) {
        if(blackAbove > 0) {
            arr[i][col] = '1';
            blackAbove--;
        } else {
            arr[i][col] = '0';
        }
    }
}


int main() {

    cin >> R >> C;
    for (int i = 1; i <= R; i++) {
        for(int j = 1; j <= C; j++) {
            cin >> arr[i][j];
        }
    }

    int lastR = boom();
    while(lastR != 0) {
        for(int i = 1; i <= C; i++) {
            int count = countAbove(lastR, i);
            int last = barisTerakhir(lastR, i);
            runtuh(last, i, count);
        }
        lastR = boom();
    }

    for (int i = 1; i <= R; i++) {
        for(int j = 1; j <= C; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }


    return 0;
}