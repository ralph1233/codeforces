#include <iostream>
#include <map>
#include <string>
#include <vector>

int main() {

  int t;
  std::string text = "Timur";
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int n;
    bool is_valid = true;
    std::map<char, int> m;
    std::string s;

    std::cin >> n;
    std::cin >> s;

    if (n != text.length()) {
      is_valid = false;
    } else {
      for (int j = 0; j < n; j++) {
        m[s[j]]++;
      }

      if (m['T'] != 1 || m['i'] != 1 || m['m'] != 1 || m['u'] != 1 ||
          m['r'] != 1) {
        is_valid = false;
      }
    }

    if (is_valid) {
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
