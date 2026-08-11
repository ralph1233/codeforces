#include <iostream>
#include <map>
#include <string>

int main() {
  int a1, a2, a3, a4, res = 0;
  std::map<int, int> m;
  std::string s;

  std::cin >> a1;
  std::cin >> a2;
  std::cin >> a3;
  std::cin >> a4;
  std::cin >> s;

  m.insert({1, a1});
  m.insert({2, a2});
  m.insert({3, a3});
  m.insert({4, a4});

  for (int i = 0; i < s.length(); i++) {
    res += m.at(s[i] - '0');
  }

  std::cout << res << "\n";

  return 0;
}