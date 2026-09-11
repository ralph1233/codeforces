#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int a, b, c;

    std::vector<int> nbs;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    nbs.push_back(a);
    nbs.push_back(b);
    nbs.push_back(c);

    int j = 5;

    while (j > 0) {
      sort(nbs.begin(), nbs.end());

      nbs[0]++;

      j--;
    }

    res.push_back(nbs[0] * nbs[1] * nbs[2]);
  }

  for (int i = 0; i < t; i++) {
    std::cout << res[i] << "\n";
  }

  return 0;
}