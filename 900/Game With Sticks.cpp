#include <iostream>

int main() {
  int n, m;
  bool flip = true;

  std::cin >> n;
  std::cin >> m;

  while (true) {
    n--;
    m--;

    if (n == 0 || m == 0) {
      if (flip) {
        std::cout << "Akshat\n";
      } else {
        std::cout << "Malvika\n";
      }

      break;
    } else {
      flip = !flip;
    }
  }

  return 0;
}