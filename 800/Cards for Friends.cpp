#include <iostream>
#include <string>
#include <vector>

int total(int w, int h) {
  if (w % 2 != 0 && h % 2 != 0) {
    return 1;
  }

  if (w % 2 == 0) {
    return total(w / 2, h) * 2;
  }

  return total(w, h / 2) * 2;
}

int main() {
  int t;
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int w, h, n;

    std::cin >> w;
    std::cin >> h;
    std::cin >> n;

    int count = total(w, h);

    if (count >= n) {
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