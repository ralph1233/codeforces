#include <iostream>
#include <string>
#include <vector>

int main() {
  int t;
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    std::string b, a = "";
    std::vector<std::vector<char>> v;

    std::cin >> b;

    for (int j = 0; j < b.length(); j++) {

      if (j % 2 == 0) {
        std::vector<char> tmp;
        tmp.push_back(b[j]);
        v.push_back(tmp);
      } else {
        v[v.size() - 1].push_back(b[j]);
      }
    }

    for (int j = 0; j < v.size(); j++) {
      if (j == v.size() - 1) {
        a += v[j][0];
        a += v[j][1];
      } else {
        a += v[j][0];
      }
    }

    res.push_back(a);
  }

  for (int i = 0; i < res.size(); i++) {
    std::cout << res[i] << "\n";
  }

  return 0;
}