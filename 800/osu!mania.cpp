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
    int n;
    std::vector<int> nbs;

    std::cin >> n;

    for (int j = 1; j <= n; j++)
    {
      for (int u = 1; u <= 4; u++)
      {
        char c;

        std::cin >> c;

        if (c == '#')
        {
          nbs.push_back(u);
        }
      }
    }

    std::reverse(nbs.begin(), nbs.end());

    res.push_back(nbs);
  }

  for (int i = 0; i < t; i++)
  {
    for (int j = 0; j < res[i].size(); j++)
    {
      std::cout << res[i][j] << " ";
    }

    std::cout << "\n";
  }

  return 0;
}