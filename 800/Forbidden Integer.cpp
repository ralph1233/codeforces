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
    int n, k, x;
    bool found = false;
    std::vector<int> nbs;

    std::cin >> n;
    std::cin >> k;
    std::cin >> x;

    for (int j = 1; j <= k; j++)
    {
      if (j == x)
      {
        continue;
      }

      nbs.push_back(j);
    }

    for (int j = 0; j < nbs.size(); j++)
    {
      int remainder = n % nbs[j];

      if (remainder == 0)
      {
        found = true;
        std::vector<int> tmp(n / nbs[j], nbs[j]);
        res.push_back(tmp);
        break;
      }

      if (std::find(nbs.begin(), nbs.end(), remainder) != nbs.end())
      {
        found = true;
        std::vector<int> tmp(n / nbs[j], nbs[j]);
        tmp.push_back(remainder);
        res.push_back(tmp);
        break;
      }

      int diff = n - nbs[j];
      auto it = std::find_if(nbs.begin(), nbs.end(), [diff](int value)
                             { return diff % value == 0; });
      if (it != nbs.end())
      {
        int index = std::distance(nbs.begin(), it);
        found = true;
        std::vector<int> tmp(diff / nbs[index], nbs[index]);
        tmp.push_back(nbs[j]);
        res.push_back(tmp);
        break;
      }
    }

    if (!found)
    {
      res.push_back({});
    }
  }

  for (int i = 0; i < t; i++)
  {
    if (res[i].size() == 0)
    {
      std::cout << "NO\n";
    }
    else
    {
      std::cout << "YES\n"
                << res[i].size() << "\n";

      for (int j = 0; j < res[i].size(); j++)
      {
        std::cout << res[i][j] << " ";
      }

      std::cout << "\n";
    }
  }

  return 0;
}
