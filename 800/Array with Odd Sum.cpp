#include <iostream>
#include <vector>
#include <string>

int main()
{
  int t;
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n, count_even = 0, count_odd = 0;

    std::cin >> n;

    for (int j = 0; j < n; j++)
    {
      int nb;

      std::cin >> nb;

      if (nb % 2 == 0)
      {
        count_even++;
      }
      else
      {
        count_odd++;
      }
    }

    if (count_odd == 0)
    {
      res.push_back("NO");
      continue;
    }

    if (count_even == 0)
    {
      if (n % 2 == 0)
      {
        res.push_back("NO");
      }
      else
      {
        res.push_back("YES");
      }
      continue;
    }

    res.push_back("YES");
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}