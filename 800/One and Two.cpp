#include <iostream>
#include <vector>
#include <set>

int result(std::vector<int> nbs)
{
  int count2 = 0;

  for (int i = 0; i < nbs.size(); i++)
  {
    if (nbs[i] == 2)
    {
      count2++;
    }
  }

  if (count2 % 2 != 0)
  {
    return -1;
  }

  int u = 0;

  for (int i = 0; i < nbs.size(); i++)
  {
    if (nbs[i] == 2)
    {
      u++;
    }

    if (u == count2 / 2)
    {
      return i + 1;
    }
  }

  return -1;
}

int main()
{
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n;
    std::vector<int> nbs;
    std::set<int> s;

    std::cin >> n;

    for (int j = 0; j < n; j++)
    {
      int nb;

      std::cin >> nb;

      nbs.push_back(nb);
      s.insert(nb);
    }

    if (s.size() == 1)
    {
      if (nbs[0] == 1)
      {
        res.push_back(1);
      }
      else if (n % 2 == 0)
      {
        res.push_back(n / 2);
      }
      else
      {
        res.push_back(-1);
      }
    }
    else
    {
      res.push_back(result(nbs));
    }
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}