#include <iostream>
#include <vector>

int main()
{
  int t;
  std::vector<std::vector<int>> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n, min, max;
    std::vector<int> nbs, tmp;

    std::cin >> n;

    min = n + 1;
    max = 0;

    for (int j = 0; j < n; j++)
    {
      int nb;

      std::cin >> nb;

      if (nb > max)
      {
        max = nb;
      }

      if (min > nb)
      {
        min = nb;
      }

      nbs.push_back(nb);
    }

    int sum = min + max;

    for (int j = 0; j < n; j++)
    {
      tmp.push_back(sum - nbs[j]);
    }

    res.push_back(tmp);
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