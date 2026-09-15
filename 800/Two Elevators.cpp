#include <iostream>
#include <vector>
#include <cmath>

int main()
{
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int a, b, c;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    int diff1 = a - 1;
    int diff2 = std::abs(b - c) + c - 1;

    if (diff1 == diff2)
    {
      res.push_back(3);
    }
    else if (diff1 > diff2)
    {
      res.push_back(2);
    }
    else
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