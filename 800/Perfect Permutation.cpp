#include <iostream>

int main() {
  int n;

  std::cin >> n;

  if (n % 2 != 0) {
    std::cout << -1 << "\n";
  } else {

    for (int i = 1; i <= n; i++) {
      if (i % 2 != 0) {
        std::cout << i + 1 << " ";
      } else {
        std::cout << i - 1 << " ";
      }
    }

    std::cout << "\n";
  }

  return 0;
}