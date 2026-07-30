#include <iostream>

int main() {
  int n, h, res = 0;

  std::cin >> n;
  std::cin >> h;

  for (int i = 0; i < n; i++) {
    int p;
    std::cin >> p;

    if (p > h) {
      res += 2;
    } else {
      res++;
    }
  }

  std::cout << res << "\n";

  return 0;
}