#include <algorithm>
#include <iostream>
#include <vector>

int main() {

  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int n;
    std::vector<int> nbs;

    std::cin >> n;

    for (int j = 0; j < n; j++) {
      int nb;

      std::cin >> nb;

      nbs.push_back(nb);
    }

    sort(nbs.begin(), nbs.end());

    if (n < 3) {
      res.push_back(-1);
    } else {
      bool is_found = false;

      for (int j = 0; j <= n - 3; j++) {
        if (nbs[j] == nbs[j + 1] && nbs[j] == nbs[j + 2]) {
          res.push_back(nbs[j]);
          is_found = true;
          break;
        }
      }

      if (!is_found) {
        res.push_back(-1);
      }
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << res[i] << "\n";
  }

  return 0;
}