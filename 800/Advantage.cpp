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
    std::vector<int> nbs, diff, tmp;

    std::cin >> n;

    for (int j = 0; j < n; j++)
    {
      int nb;

      std::cin >> nb;

      nbs.push_back(nb);
    }

    tmp = nbs;

    sort(tmp.begin(), tmp.end());

    for (int j = 0; j < n; j++)
    {
      int last = tmp.back();
      int before_last = tmp[n - 2];

      if (nbs[j] == last)
      {
        diff.push_back(nbs[j] - before_last);
      }
      else
      {
        diff.push_back(nbs[j] - last);
      }
    }

    res.push_back(diff);
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