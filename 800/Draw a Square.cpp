#include <iostream>
#include <set>
#include <string>
#include <vector>

int main() {
  int t;
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int l, r, d, u;
    std::set<int> s;

    std::cin >> l;
    std::cin >> r;
    std::cin >> d;
    std::cin >> u;

    s.insert(l);
    s.insert(r);
    s.insert(d);
    s.insert(u);

    if (s.size() == 1) {
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