#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MAXN = 1000000;

vector<int> arrHeap(MAXN, 0);

int getParent(int i) {
    return (i - 1) / 2;
}

int getLeftChild(int i) {
    return 2 * i + 1;
}

int getRightChild(int i) {
    return 2 * i + 2;
}

void pushHeap(int x) {
    int i = arrHeap.size();
    arrHeap.push_back(x);
    while (i > 0 && arrHeap[getParent(i)] < arrHeap[i]) {
        swap(arrHeap[i], arrHeap[getParent(i)]);
        i = getParent(i);
    }
}

void popHeap() {
    if (arrHeap.size() == 0) return;
    arrHeap[0] = arrHeap.back();
    arrHeap.pop_back();
    int i = 0;
    while (true) {
        int left = getLeftChild(i);
        int right = getRightChild(i);
        int largest = i;

        if (left < arrHeap.size() && arrHeap[left] > arrHeap[largest]) {
            largest = left;
        }
        if (right < arrHeap.size() && arrHeap[right] > arrHeap[largest]) {
            largest = right;
        }
        if (largest == i) break;

        swap(arrHeap[i], arrHeap[largest]);
        i = largest;
    }
}

signed main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(x == 1) {
            int y;
            cin >> y;
            pushHeap(y);
        } else if (x == 2) {
            cout << arrHeap[0] << endl;
        } else {
            popHeap();
        }
    }

    return 0;
}
