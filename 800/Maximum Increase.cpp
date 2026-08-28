#include <iostream>
#include <vector>

int main() {
  int n, max = 0, count = 1;
  std::vector<int> nbs;

  std::cin >> n;

  for (int i = 0; i < n; i++) {
    int nb;

    std::cin >> nb;

    nbs.push_back(nb);
  }

  for (int i = 0; i < n - 1; i++) {
    if (nbs[i + 1] > nbs[i]) {
      count++;
    } else {

      if (count > max) {
        max = count;
      }

      count = 1;
    }
  }

  if (count > max) {
    max = count;
  }

  std::cout << max << "\n";

  return 0;
}