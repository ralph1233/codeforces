#include <iostream>
#include <vector>

int main() {
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int n, a, b;

    std::cin >> n;
    std::cin >> a;
    std::cin >> b;

    if (n % 2 == 0) {

      if (b > a * 2) {
        res.push_back(a * n);
      } else {
        res.push_back(b * n / 2);
      }

    } else {

      if (b > a * 2) {
        res.push_back(a * n);
      } else {
        res.push_back(b * (n / 2) + a);
      }
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << res[i] << "\n";
  }

  return 0;
}