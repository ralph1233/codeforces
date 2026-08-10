#include <iostream>
#include <string>
#include <vector>

int main() {
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int n, count = 0, sum = 0;
    std::string s;

    std::cin >> n;
    std::cin >> s;

    for (int j = 0; j < n; j++) {
      if (s[j] == '.') {
        count++;
      } else {
        if (count >= 3) {
          sum = 2;
          count = 0;
          break;
        } else {
          sum += count;
          count = 0;
        }
      }
    }

    if (count >= 3) {
      sum = 2;
    } else {
      sum += count;
    }

    res.push_back(sum);
  }

  for (int i = 0; i < t; i++) {
    std::cout << res[i] << "\n";
  }

  return 0;
}