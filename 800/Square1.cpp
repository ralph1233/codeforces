#include <algorithm>
#include <cmath>
#include <iostream>
#include <utility>
#include <vector>

bool compare(std::pair<int, int> p1, std::pair<int, int> p2) {
  return p1.first < p2.first;
}

int main() {
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    std::vector<std::pair<int, int>> xy;

    for (int j = 0; j < 4; j++) {
      int x, y;

      std::cin >> x;
      std::cin >> y;

      xy.push_back({x, y});
    }

    sort(xy.begin(), xy.end(), compare);

    res.push_back(std::pow(xy[3].first - xy[0].first, 2));
  }

  for (int i = 0; i < t; i++) {
    std::cout << res[i] << "\n";
  }

  return 0;
}