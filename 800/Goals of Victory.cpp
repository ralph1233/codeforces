#include <iostream>
#include <vector>

int main() {

  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int n, sum = 0;

    std::cin >> n;

    for (int j = 0; j < n - 1; j++) {
      int nb;

      std::cin >> nb;

      sum += -1 * nb;
    }

    res.push_back(sum);
  }

  for (int i = 0; i < t; i++) {
    std::cout << res[i] << "\n";
  }

  return 0;
}