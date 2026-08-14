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

    if (s.length() % 2 != 0) {
      res.push_back("NO");
    } else {
      bool is_square = true;

      for (int j = 0; j < s.length() / 2; j++) {
        if (s[j] != s[j + s.length() / 2]) {
          is_square = false;
          break;
        }
      }

      if (is_square) {
        res.push_back("YES");
      } else {
        res.push_back("NO");
      }
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << res[i] << "\n";
  }

  return 0;
}