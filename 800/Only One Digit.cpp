#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int x;
    std::vector<int> nbs;

    std::cin >> x;

    while (x != 0) {
      int digit = x % 10;
      x /= 10;
      nbs.push_back(digit);
    }

    sort(nbs.begin(), nbs.end());

    res.push_back(nbs[0]);
  }

  for (int i = 0; i < t; i++) {
    std::cout << res[i] << "\n";
  }

  return 0;
}