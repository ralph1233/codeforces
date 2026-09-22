#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int n, m, min;
  std::vector<int> nbs;

  std::cin >> n;
  std::cin >> m;

  for (int i = 0; i < m; i++) {
    int nb;

    std::cin >> nb;

    nbs.push_back(nb);
  }

  sort(nbs.begin(), nbs.end());

  min = nbs[n - 1] - nbs[0];

  for (int i = 0; i <= m - n; i++) {

    int diff = nbs[i + n - 1] - nbs[i];

    if (min > diff) {
      min = diff;
    }
  }

  std::cout << min << "\n";

  return 0;
}
