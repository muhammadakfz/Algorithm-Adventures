#include <iostream>
#include <string>

using namespace std;

int f(string s) {
  int n = s.size();
  int cnt = 0;

  for (int i = 0; i <= n - 3; ++i) {
    if (s.substr(i, 5) == "mapie") {
      cnt++;
      i += 4; 
      continue;
    }

    if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p') cnt++;
    else if (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e')  cnt++;
  }

  return cnt;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    string s;
    cin >> s;

    cout << f(s) << endl;
  }

  return 0;
}
