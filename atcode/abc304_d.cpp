#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Read the number of test cases
    int t;
    cin >> t;

    // Iterate over each test case
    while (t--) {
        // Read the values of n and k
        int n, k;
        cin >> n >> k;

        // Calculate the minimum possible number of ones
        int min_ones = 0;

        // Check if n is divisible by k
        if (n % k == 0) {
            min_ones = k;
        } else {
            min_ones = ((n / k) + 1) * k;
        }

        // Output the minimum possible number of ones
        cout << min_ones << endl;
    }

    return 0;
}
