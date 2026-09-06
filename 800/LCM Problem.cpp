#include <iostream>
#include <vector>

int main()
{
  int t;
  std::vector<std::vector<int>> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int l, r;

    std::cin >> l;
    std::cin >> r;

    if (l * 2 > r)
    {
      res.push_back({-1, -1});
    }
    else
    {
      res.push_back({l, l * 2});
    }
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i][0] << " " << res[i][1] << "\n";
  }

  return 0;
}