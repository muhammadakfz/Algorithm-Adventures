#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> numbers(n);
        for (int i = 0; i < n; i++) {
            cin >> numbers[i];
        }

        unordered_map<int, int> count;
        for (int num : numbers) {
            count[num]++;
        }

        for (auto& pair : count) {
            if (pair.second >= n - 2) {
                cout << pair.first << endl;
                break;
            }
        }
    }

    return 0;
}
