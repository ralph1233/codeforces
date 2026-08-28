#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

int main() {
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int a, b;
    std::vector<int> nbs;

    std::cin >> a;
    std::cin >> b;

    nbs.push_back(a);
    nbs.push_back(b);

    sort(nbs.begin(), nbs.end());

    int max = std::max(nbs[0] * 2, nbs[1]);

    res.push_back(pow(max, 2));
  }

  for (int i = 0; i < t; i++) {
    std::cout << res[i] << "\n";
  }

  return 0;
}