#include <cstdlib>
#include <iostream>
#include <vector>

int main() {
  int t;
  std::vector<long long int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    long long int n, m;

    std::cin >> n;
    std::cin >> m;

    if (n == 1) {

      res.push_back(0);

    } else if (n == 2) {

      res.push_back(m);

    } else if (n <= 4) {

      res.push_back(m * 2);

    } else {

      long long int a = m / 2;
      long long int b = m - a;

      res.push_back(a + a + b + b);
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << res[i] << "\n";
  }

  return 0;
}