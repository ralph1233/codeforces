#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

int main()
{
  int t;
  std::vector<std::vector<std::vector<int>>> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n;
    std::set<int> s;
    std::vector<int> a, b, c;
    std::vector<std::vector<int>> tmp;

    std::cin >> n;

    for (int j = 0; j < n; j++)
    {
      int nb;

      std::cin >> nb;

      s.insert(nb);
      a.push_back(nb);
    }

    if (s.size() == 1)
    {
      res.push_back({});
    }
    else
    {
      sort(a.begin(), a.end());

      int j;

      for (j = 0; j < a.size(); j++)
      {
        b.push_back(a[j]);

        if (a[j] != a[j + 1])
        {
          break;
        }
      }

      for (int u = j + 1; u < a.size(); u++)
      {
        c.push_back(a[u]);
      }

      tmp.push_back(b);
      tmp.push_back(c);

      res.push_back(tmp);
    }
  }

  for (int i = 0; i < res.size(); i++)
  {
    if (res[i].size() == 0)
    {
      std::cout << -1 << "\n";
    }
    else
    {
      std::cout << res[i][0].size() << " " << res[i][1].size() << "\n";

      for (int j = 0; j < res[i][0].size(); j++)
      {
        std::cout << res[i][0][j] << " ";
      }

      std::cout << "\n";

      for (int j = 0; j < res[i][1].size(); j++)
      {
        std::cout << res[i][1][j] << " ";
      }

      std::cout << "\n";
    }
  }

  return 0;
}