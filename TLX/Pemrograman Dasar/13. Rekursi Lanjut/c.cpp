#include <bits/stdc++.h>
using namespace std;

int n;
int tulis[1001];
bool pernah[1001];

void f(int kedalaman) {
    if(kedalaman >= n) {
        bool zigzag = true;
        for (int i = 1; i < n-1; i++) {
            if(!((tulis[i] > tulis[i+1] && tulis[i] > tulis[i-1])||(tulis[i] < tulis[i+1] && tulis[i] < tulis[i-1]))) zigzag = false;
        }
        
        if(zigzag) {
            for (int i = 0; i < n; i++) {
                cout << tulis[i];
            } cout << endl;
        }
    } else {
        for (int i = 1; i <= n; i++) {
            if (!pernah[i]) {
                pernah[i] = true;
                tulis[kedalaman] = i;
                f(kedalaman + 1);
                pernah[i] = false;
            }   
        } 
    }
}

int main() {
    cin >> n;
    f(0);

    return 0;
}