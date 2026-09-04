#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

bool is_beautiful(std::vector<int> nbs)
{
  for (int i = 1; i < nbs.size(); i++)
  {
    int sum = 0;

    for (int j = 0; j < i; j++)
    {
      sum += nbs[j];
    }

    if (sum == nbs[i])
    {
      return false;
    }
  }

  return true;
}

bool compare(int a, int b)
{
  return a > b;
}

int main()
{
  int t;
  std::vector<std::vector<int>> res;

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
      res.push_back({});
    }
    else if (is_beautiful(nbs))
    {
      res.push_back(nbs);
    }
    else
    {
      sort(nbs.begin(), nbs.end(), compare);

      int j = 2;

      while (nbs[0] == nbs[1])
      {
        std::swap(nbs[1], nbs[j]);
        j++;
      }

      res.push_back(nbs);
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
      std::cout << "YES\n";

      for (int j = 0; j < res[i].size(); j++)
      {
        std::cout << res[i][j] << " ";
      }

      std::cout << "\n";
    }
  }

  return 0;
}