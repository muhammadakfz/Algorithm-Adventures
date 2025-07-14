#include <bits/stdc++.h>
#define int long long
using namespace std;

int ans;

void merge(vector<int> &v, int l, int m, int h) {
    
    int a = m - l + 1;
    int b = h - m;

    vector<int> left(a), right(b);
    for (int i = 0; i < a; i++) {
        left[i] = v[l + i];
    }

    for (int i = 0; i < b; i++) {
        right[i] = v[m+i+1];
    }

    int i = 0, j = 0, k = l;

    while(i < a and j < b) {
        if (left[i] <= right[j]) {
            v[k++] = left[i++];
        } else {
            v[k++] = right[j++];
            ans += (a - i);
        }
    }

    while (i < a) {
        v[k++] = left[i++];
    }

    while (j < b) {
        v[k++] = right[j++];
    }
}

void mergeSort(vector<int> &v, int l, int h) {
    if (l == h) {
        return;
    } else {
        int mid = (l+h) / 2;
        mergeSort(v, l, mid);
        mergeSort(v, mid + 1, h);
        merge(v, l, mid, h);
    }
}

signed main() {
   
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    mergeSort(v, 0, n - 1);
    cout << ans << endl;
}
