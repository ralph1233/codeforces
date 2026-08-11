#include <iostream>
#include <set>
#include <string>
#include <vector>

int main() {
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int n, sum = 0;
    std::string s;
    std::set<char> set;

    std::cin >> n;
    std::cin >> s;

    for (int j = 0; j < n; j++) {
      if (set.find(s[j]) != set.end()) {
        sum++;
      } else {
        sum += 2;
        set.insert(s[j]);
      }
    }

    res.push_back(sum);
  }

  for (int i = 0; i < t; i++) {
    std::cout << res[i] << "\n";
  }

  return 0;
}