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

    for (int j = 0; j < 2 * n; j++)
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

    if (count_even == count_odd)
    {
      res.push_back("YES");
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