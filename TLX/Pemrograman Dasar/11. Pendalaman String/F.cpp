#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '_') {
            s.erase(i, 1);
            s[i] -= 32;
        } else if(s[i] > 64 and s[i] < 91) {
            s[i] += 32;
            s.insert(i, "_");
            i++;
        }
    }

    cout << s << endl;
    cin.get();
    return 0;
}