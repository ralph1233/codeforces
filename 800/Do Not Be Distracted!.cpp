#include <iostream>
#include <string>
#include <vector>

bool is_suspicious(int n, std::string s) {

  for (int i = 0; i < n;) {

    while (s[i] == s[i + 1]) {
      i++;
    }

    for (int j = i + 1; j < n; j++) {
      if (s[j] == s[i]) {
        return true;
      }
    }

    i++;
  }

  return false;
}

int main() {
  int t;
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int n;
    std::string s;

    std::cin >> n;
    std::cin >> s;

    if (is_suspicious(n, s)) {
      res.push_back("NO");
    } else {
      res.push_back("YES");
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << res[i] << "\n";
  }

  return 0;
}