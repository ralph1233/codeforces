#include <iostream>
#include <vector>

int main() {
  int t;
  std::vector<std::vector<int>> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int n;

    std::cin >> n;

    if (n == 1) {
      res.push_back({1, 0});
    } else {
      if (n % 3 == 0) {
        res.push_back({n / 3, n / 3});
      } else {
        int c1 = n / 3;
        int c2 = n / 3 + 1;

        if (c1 + c2 * 2 == n) {
          res.push_back({c1, c2});
        } else {
          res.push_back({c2, c1});
        }
      }
    }
  }

  for (int i = 0; i < t; i++) {

    for (int j = 0; j < 2; j++) {
      std::cout << res[i][j] << " ";
    }

    std::cout << "\n";
  }

  return 0;
}