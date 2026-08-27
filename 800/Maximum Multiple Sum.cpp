#include <iostream>
#include <vector>

int main() {
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int n;

    std::cin >> n;

    if (n == 3) {
      res.push_back(3);
    } else {
      res.push_back(2);
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << res[i] << "\n";
  }

  return 0;
}