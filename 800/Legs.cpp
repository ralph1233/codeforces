#include <iostream>
#include <vector>

int main() {
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int n, count = 0;

    std::cin >> n;

    while (n > 0) {
      count++;

      if (n % 4 == 0) {
        n -= 4;
      } else {
        n -= 2;
      }
    }

    res.push_back(count);
  }

  for (int i = 0; i < t; i++) {
    std::cout << res[i] << "\n";
  }

  return 0;
}