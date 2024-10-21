#include <bits/stdc++.h>
using namespace std;

bool cmp (pair<string, string> a, pair<string, string> b) {
    if(a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

int main() {

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<pair<string, string>> a(n);

        for (int i = 0; i < n; i++) {
            string name, classiness, classes;
            cin >> name >> classiness >> classes;
            classiness = classiness.substr(0, classiness.size());
            name.pop_back();
            a[i] = {name, classiness};
        } 

        for (int i = 0; i < n; i++) {
            string classiness = a[i].second;
            string res = "", temp = "";
            for (int j = 0; j < a[i].second.size(); j++) {
                if(a[i].second[j] == '-') {
                    continue;
                }
                temp += a[i].second[j];
                if(temp == "upper") {
                    res += '3';
                    temp = "";
                } else if (temp == "middle") {
                    res += '2';
                    temp = "";
                } else if (temp == "lower") {
                    res += '1';
                    temp = "";
                }
            }
            a[i].second = res;
        }

        int longest = 0;
        for (int i = 0; i < n; i++) {
            longest = max(longest, (int)a[i].second.size());
        }

        for (int i = 0; i < n; i++) {
            while(a[i].second.size() < longest) {
                a[i].second += '2';
            }
        }

        sort(a.begin(), a.end(), cmp);


        for (int i = 0; i < n; i++) {
            cout << a[i].first << endl;
        }
        cout << "==============================" << endl;
    }

    return 0;
}