#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    int eat = 0, tmp = 1;
    int candies = 0;
    bool flag = true;

    for (int i = 1; i <= n; i++) {
        if(i == n and k == 0) {
            candies--;
            eat++;        
        } else if(flag) {
            candies += tmp;
            tmp++;
            if(i == 1) flag == true;
            else flag = false;
        } else {
            candies--;
            if(candies == 0) {
                flag = true;
            } 

            eat++;
            if(i == 3) flag = false;
            else flag = true;
        }

        cout << candies << " " << eat << endl;
        if(candies == k) break;
    }
    
    cout << eat << endl;
    

    return 0;
}