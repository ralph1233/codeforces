#include <iostream>
#include <string>
#include <vector>

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
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n;
    std::vector<int> nbs;

    std::cin >> n;

    for (int j = 0; j < n; j++)
    {
      int nb;

      std::cin >> nb;

      nbs.push_back(nb);
    }

    if (is_sorted(nbs))
    {
      res.push_back("YES");
    }
    else
    {
      for (int u = 0; u < nbs.size(); u++)
      {
        int count = 0;

        for (int k = 1; k < nbs.size() - 1; k++)
        {
          int current_nb = nbs[k];
          int prev_nb = nbs[k - 1];
          int next_nb = nbs[k + 1];

          if (current_nb > prev_nb && current_nb > next_nb)
          {
            count++;
            nbs[k] = next_nb;
            nbs[k + 1] = current_nb;
          }
        }

        bool check_sorted = is_sorted(nbs);

        if (count == 0 && !check_sorted)
        {
          res.push_back("NO");
          break;
        }
        else if (check_sorted)
        {
          res.push_back("YES");
          break;
        }
      }
    }
  }

  for (int i = 0; i < res.size(); i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}