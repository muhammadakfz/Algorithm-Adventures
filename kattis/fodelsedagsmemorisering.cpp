#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    map<string, pair<int, int>> people;
    for (int i = 0; i < n; i++) {
        string name;
        string date;
        cin >> name >> date;

        int month = stoi(date.substr(0, 2));
        int day = stoi(date.substr(3, 2));

        cout << month << " " << day << endl;
        people[name] = {month, day};
    }

    vector<string> names;
    for (auto p : people) {
        names.push_back(p.first);
    }

    sort(names.begin(), names.end());

    for (string name : names) {
        cout << name << endl;
    }

    return 0;
}