#include <iostream>
#include <string>
#include <vector>

int count(int n) {

  std::string s = std::to_string(n);

  return (s[0] - '0') + 9 * (s.length() - 1);
}

int main() {
  int t;

  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int n;

    std::cin >> n;

    res.push_back(count(n));
  }

  for (int i = 0; i < t; i++) {
    std::cout << res[i] << "\n";
  }

  return 0;
}
