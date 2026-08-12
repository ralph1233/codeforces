#include <iostream>
#include <vector>

int main() {
  int t;
  std::vector<int> v;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int n, res = 0;
    int even_occ = 0, odd_occ = 0;

    std::cin >> n;

    for (int j = 0; j < n; j++) {
      int nb;

      std::cin >> nb;

      if (nb % 2 == 0) {
        even_occ++;
      } else {
        odd_occ++;
      }

      if (j % 2 != nb % 2) {
        res++;
      }
    }

    if (n % 2 == 0) {
      if (even_occ != odd_occ) {
        v.push_back(-1);
        continue;
      }
    } else {
      if (even_occ + 1 != odd_occ && odd_occ + 1 != even_occ) {
        v.push_back(-1);
        continue;
      }
    }

    if (res % 2 == 0) {
      v.push_back(res / 2);
    } else {
      v.push_back(-1);
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << v[i] << "\n";
  }

  return 0;
}