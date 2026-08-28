#include <iostream>
#include <string>
#include <vector>

int main() {
  int t;
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    std::string s, s1 = "";

    std::cin >> s;

    for (int j = 0; j < s.length() - 2; j++) {
      s1 += s[j];
    }

    s1 += 'i';

    res.push_back(s1);
  }

  for (int i = 0; i < t; i++) {
    std::cout << res[i] << "\n";
  }

  return 0;
}