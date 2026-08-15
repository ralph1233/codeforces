#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
  int t;
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n, sum = 0;
    std::vector<int> ones, twos;

    std::cin >> n;

    for (int j = 0; j < n; j++)
    {
      int nb;

      std::cin >> nb;

      sum += nb;

      if (nb == 1)
      {
        ones.push_back(1);
      }
      else
      {
        twos.push_back(2);
      }
    }

    if (sum % 2 == 0)
    {
      int middle = sum / 2;

      if (ones.size() == 0)
      {
        if (middle % 2 != 0)
        {
          res.push_back("NO");
        }
        else
        {
          res.push_back("YES");
        }
      }
      else if (twos.size() == 0)
      {
        res.push_back("YES");
      }
      else
      {
        res.push_back("YES");
      }
    }
    else
    {
      res.push_back("NO");
    }
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}
