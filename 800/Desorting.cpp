#include <iostream>
#include <vector>
#include <climits>

bool is_sorted(std::vector<int> nbs)
{
  for (int i = 1; i < nbs.size(); i++)
  {
    if (nbs[i] < nbs[i - 1])
    {
      return false;
    }
  }

  return true;
}

int main()
{
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n, min;
    std::vector<int> nbs;

    std::cin >> n;

    for (int j = 0; j < n; j++)
    {
      int nb;

      std::cin >> nb;

      nbs.push_back(nb);
    }

    if (!is_sorted(nbs))
    {
      res.push_back(0);
    }
    else
    {
      int min = INT_MAX;

      for (int j = 1; j < n; j++)
      {
        int count = (nbs[j] - nbs[j - 1]) / 2 + 1;

        if (min > count)
        {
          min = count;
        }
      }

      res.push_back(min);
    }
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}
