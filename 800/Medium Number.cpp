#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  int t;
  std::vector<std::vector<int>> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int a, b, c;
    std::vector<int> v;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    sort(v.begin(), v.end());

    res.push_back(v);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i][1] << "\n";
  }

  return 0;
}