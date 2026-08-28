#include <iostream>

int main() {
  int n, nb, min = 0;

  std::cin >> n;
  std::cin >> nb;

  min = abs(nb);

  for (int i = 1; i < n; i++) {

    std::cin >> nb;

    if (min > abs(nb)) {
      min = abs(nb);
    }
  }

  std::cout << min << "\n";

  return 0;
}