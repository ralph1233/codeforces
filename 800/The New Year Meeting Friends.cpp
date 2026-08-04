#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  int x1, x2, x3;
  std::vector<int> v;

  std::cin >> x1;
  std::cin >> x2;
  std::cin >> x3;

  v.push_back(x1);
  v.push_back(x2);
  v.push_back(x3);

  sort(v.begin(), v.end());

  std::cout << (v[2] - v[1]) + (v[1] - v[0]) << "\n";

  return 0;
}
