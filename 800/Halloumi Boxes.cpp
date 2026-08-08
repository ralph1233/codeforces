#include <iostream>
#include <vector>
#include <string>

bool is_sorted(std::vector<int> v)
{
  for (int i = 1; i < v.size(); i++)
  {
    if (v[i] < v[i - 1])
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
    int n, k;
    std::vector<int> v;

    std::cin >> n;
    std::cin >> k;

    for (int j = 0; j < n; j++)
    {
      int nb;

      std::cin >> nb;

      v.push_back(nb);
    }

    if (is_sorted(v))
    {
      res.push_back("YES");
    }
    else
    {
      if (k == 1 && v.size() > 1)
      {
        res.push_back("NO");
      }
      else
      {
        res.push_back("YES");
      }
    }
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}