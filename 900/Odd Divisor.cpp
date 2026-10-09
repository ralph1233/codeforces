#include <iostream>
#include <string>
#include <vector>

bool result(long long int n) {
  while (n > 1) {

    if (n % 2 == 1) {
      return true;
    }

    n /= 2;
  }

  return false;
}

int main() {
  int t;
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    long long int n;

    std::cin >> n;

    if (result(n)) {
      res.push_back("YES");
    } else {
      res.push_back("NO");
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << res[i] << "\n";
  }

  return 0;
}