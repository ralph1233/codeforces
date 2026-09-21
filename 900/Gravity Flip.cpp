#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int n;
  std::vector<int> nbs;

  std::cin >> n;

  for (int i = 0; i < n; i++) {
    int nb;

    std::cin >> nb;

    nbs.push_back(nb);
  }

  sort(nbs.begin(), nbs.end());

  for (int i = 0; i < n; i++) {
    std::cout << nbs[i] << " ";
  }

  std::cout << "\n";

  return 0;
}