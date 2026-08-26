#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
  int t;
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int s1, s2, s3, s4;
    std::vector<int> a, b;

    std::cin >> s1;
    std::cin >> s2;
    std::cin >> s3;
    std::cin >> s4;

    a.push_back(s1);
    a.push_back(s2);
    b.push_back(s3);
    b.push_back(s4);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (a[0] > b[1] || b[0] > a[1]) {
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