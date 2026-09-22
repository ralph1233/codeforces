#include <iostream>

int main() {
  int n, nb, prev, count = 1, max_count = 1;

  std::cin >> n;
  std::cin >> nb;

  prev = nb;

  for (int i = 1; i < n; i++) {

    std::cin >> nb;

    if (nb >= prev) {

      count++;

    } else {

      if (count > max_count) {
        max_count = count;
      }

      count = 1;
    }

    prev = nb;
  }

  if (count > max_count) {
    max_count = count;
  }

  std::cout << max_count << "\n";

  return 0;
}