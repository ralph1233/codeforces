#include <iostream>
#include <set>
#include <vector>

int main() {
  int y;

  std::cin >> y;
  y++;

  while (true) {
    int tmp = y;
    std::set<int> s;
    std::vector<int> v;

    while (tmp != 0) {
      int digit = tmp % 10;
      tmp /= 10;
      v.push_back(digit);
      s.insert(digit);
    }

    if (s.size() == v.size()) {
      break;
    }

    y++;
  }

  std::cout << y << '\n';

  return 0;
}