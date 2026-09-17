#include <iostream>
#include <set>
#include <string>
#include <utility>
#include <vector>

int main() {
  int t;
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    std::string s;
    std::set<char> _set;

    std::cin >> s;

    for (int j = 0; j < s.length(); j++) {
      _set.insert(s[j]);
    }

    if (_set.size() == 1) {
      res.push_back("");
    } else {
      int find_index;

      for (int j = 1; j < s.length(); j++) {
        if (s[j] != s[0]) {
          find_index = j;
          break;
        }
      }

      std::swap(s[0], s[find_index]);

      res.push_back(s);
    }
  }

  for (int i = 0; i < t; i++) {
    if (res[i] == "") {
      std::cout << "NO\n";
    } else {
      std::cout << "YES\n" << res[i] << "\n";
    }
  }

  return 0;
}