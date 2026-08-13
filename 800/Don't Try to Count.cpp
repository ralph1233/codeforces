#include <iostream>
#include <string>
#include <vector>

int main() {
  int t;
  std::vector<int> v;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int n, m, res = 0;
    std::string x, s;

    std::cin >> n;
    std::cin >> m;
    std::cin >> x;
    std::cin >> s;

    while (true) {
      if (x.find(s) == std::string::npos && x.length() > s.length() &&
          res >= 10) {
        v.push_back(-1);
        break;
      }

      if (x.find(s) != std::string::npos) {
        v.push_back(res);
        break;
      }

      x += x;
      res++;
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << v[i] << "\n";
  }

  return 0;
}