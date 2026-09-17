#include <iostream>
#include <vector>

int main() {
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int m, a, b, c, sum = 0, remainder1, remainder2;

    std::cin >> m;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    if (m > a) {
      sum += a;
      remainder1 = m - a;
    } else {
      sum += m;
      remainder1 = 0;
    }

    if (m > b) {
      sum += b;
      remainder2 = m - b;
    } else {
      sum += m;
      remainder2 = 0;
    }

    int sum_remainders = remainder1 + remainder2;

    if (sum_remainders > c) {
      sum += c;
    } else {
      sum += sum_remainders;
    }

    res.push_back(sum);
  }

  for (int i = 0; i < t; i++) {
    std::cout << res[i] << "\n";
  }

  return 0;
}