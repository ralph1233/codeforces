#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
  int t;
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    std::string s;

    std::cin >> s;

    reverse(s.begin(), s.end());

    for (int j = 0; j < s.length(); j++) {
      if (s[j] == 'p') {
        s[j] = 'q';
      } else if (s[j] == 'q') {
        s[j] = 'p';
      }
    }

    res.push_back(s);
  }

  for (int i = 0; i < t; i++) {
    std::cout << res[i] << "\n";
  }

  return 0;
}