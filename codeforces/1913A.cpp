#include <iostream>
#include <string>

int min_cost_to_make_good(const std::string& s) {
  int single_zeros = 0;
  int single_ones = 0;
  int swap_pairs = 0;
  for (int i = 1; i < s.size(); ++i) {
    if (s[i] != s[i - 1]) {
      continue;
    }
    swap_pairs++;
  }
  for (char c : s) {
    if (c == '0') {
      single_zeros++;
    } else {
      single_ones++;
    }
  }
  return std::min(single_zeros, single_ones) + std::min(swap_pairs, std::min(single_zeros, single_ones));
}

int main() {
  int t;
  std::cin >> t;
  for (int i = 0; i < t; ++i) {
    std::string s;
    std::cin >> s;
    int min_cost = min_cost_to_make_good(s);
    std::cout << min_cost << std::endl;
  }
  return 0;
}
