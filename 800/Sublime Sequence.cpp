#include <iostream>
#include <vector>

int main() {
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int x, n;

    std::cin >> x;
    std::cin >> n;

    if (n % 2 == 0) {
      res.push_back(0);
    } else {
      res.push_back(x);
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << res[i] << "\n";
  }

  return 0;
}