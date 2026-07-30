#include <algorithm>
#include <iostream>
#include <string>

int main() {
  std::string s, t;

  std::cin >> s;
  std::cin >> t;

  std::reverse(s.begin(), s.end());

  if (s == t) {
    std::cout << "YES\n";
  } else {
    std::cout << "NO\n";
  }

  return 0;
}