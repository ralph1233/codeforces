#include <iostream>
#include <vector>

int main()
{
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int a, b;

    std::cin >> a;
    std::cin >> b;

    if (a == b)
    {
      res.push_back(0);
      continue;
    }

    if (b > a)
    {

      if (a % 2 != 0 && b % 2 != 0)
      {
        res.push_back(2);
      }

      if (a % 2 != 0 && b % 2 == 0)
      {
        res.push_back(1);
      }

      if (a % 2 == 0 && b % 2 != 0)
      {
        res.push_back(1);
      }

      if (a % 2 == 0 && b % 2 == 0)
      {
        res.push_back(2);
      }

      continue;
    }

    if (a % 2 != 0 && b % 2 != 0)
    {
      res.push_back(1);
    }

    if (a % 2 != 0 && b % 2 == 0)
    {
      res.push_back(2);
    }

    if (a % 2 == 0 && b % 2 != 0)
    {
      res.push_back(2);
    }

    if (a % 2 == 0 && b % 2 == 0)
    {
      res.push_back(1);
    }
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}
