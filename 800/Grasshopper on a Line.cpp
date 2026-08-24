#include <iostream>
#include <vector>

int main() {
  int t;
  std::vector<std::vector<int>> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int x, k;

    std::cin >> x;
    std::cin >> k;

    if (x % k != 0) {
      res.push_back({x});
    } else {
      for (int j = x; j >= x / 2; j--) {
        if (j % k != 0 && (x - j) % k != 0) {
          res.push_back({j, x - j});
          break;
        }
      }
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << res[i].size() << "\n";

    for (int j = 0; j < res[i].size(); j++) {
      std::cout << res[i][j] << " ";
    }

    std::cout << "\n";
  }

  return 0;
}