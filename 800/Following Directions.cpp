#include <iostream>
#include <string>
#include <vector>

int main() {
  int t;
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int n, x = 0, y = 0;
    bool found = false;
    std::string s;

    std::cin >> n;
    std::cin >> s;

    for (int j = 0; j < n; j++) {
      switch (s[j]) {
      case 'L':
        x--;
        break;

      case 'R':
        x++;
        break;

      case 'U':
        y++;
        break;

      case 'D':
        y--;
        break;
      }

      if (x == 1 && y == 1) {
        found = true;
        break;
      }
    }

    if (found) {
      res.push_back("YES");
    } else {
      res.push_back("NO");
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << res[i] << "\n";
  }

  return 0;
}