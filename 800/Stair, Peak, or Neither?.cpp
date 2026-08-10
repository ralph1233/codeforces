#include <iostream>
#include <string>
#include <vector>

int main() {
  int t;
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int a, b, c;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    if (b > a && b < c) {
      res.push_back("STAIR");
    } else if (b > a && b > c) {
      res.push_back("PEAK");
    } else {
      res.push_back("NONE");
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << res[i] << "\n";
  }

  return 0;
}