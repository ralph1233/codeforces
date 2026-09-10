#include <iostream>
#include <string>
#include <vector>

int main() {
  int t;
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int n, sum_even = 0, sum_odd = 0;

    std::cin >> n;

    for (int j = 0; j < n; j++) {
      int nb;

      std::cin >> nb;

      if (nb % 2 == 0) {
        sum_even += nb;
      } else {
        sum_odd += nb;
      }
    }

    if (sum_even > sum_odd) {
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
