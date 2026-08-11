#include <iostream>

bool is_next(int n, int m) {
  for (int i = n + 1; i <= m; i++) {
    int count = 0;

    for (int j = 1; j <= i; j++) {
      if (i % j == 0) {
        count++;
      }
    }

    if (count == 2) {
      if (i == m) {
        return true;
      }
      return false;
    }
  }

  return false;
}

int main() {

  int n, m;

  std::cin >> n;
  std::cin >> m;

  if (is_next(n, m)) {
    std::cout << "YES\n";
  } else {
    std::cout << "NO\n";
  }

  return 0;
}