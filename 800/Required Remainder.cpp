#include <iostream>
#include <vector>

int main() {

  int t = 1;
  std::vector<int> v;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int x, y, n;

    std::cin >> x;
    std::cin >> y;
    std::cin >> n;

    while (true) {
      int result = n % x;

      if (result == y) {
        break;
      }

      if (result > y) {
        n -= (result - y);
      } else {
        n -= (result + x - y);
      }
    }

    v.push_back(n);
  }

  for (int i = 0; i < t; i++) {
    std::cout << v[i] << "\n";
  }

  return 0;
}