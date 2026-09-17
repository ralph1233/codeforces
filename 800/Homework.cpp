#include <deque>
#include <iostream>
#include <string>
#include <vector>

int main() {
  int t;
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int n, m;
    std::string a, b, c;
    std::deque<char> d;

    std::cin >> n;
    std::cin >> a;
    std::cin >> m;
    std::cin >> b;
    std::cin >> c;

    for (int j = 0; j < n; j++) {
      d.push_back(a[j]);
    }

    for (int j = 0; j < m; j++) {
      if (c[j] == 'V') {
        d.push_front(b[j]);
      } else {
        d.push_back(b[j]);
      }
    }

    std::string str(d.begin(), d.end());

    res.push_back(str);
  }

  for (int i = 0; i < t; i++) {
    std::cout << res[i] << "\n";
  }

  return 0;
}