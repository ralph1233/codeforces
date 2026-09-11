#include <iostream>
#include <vector>

int main()
{
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int a, b, c, d;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;

    if (b > d)
    {
      res.push_back(-1);
      continue;
    }

    int diff = d - b;

    if ((a + diff) < c)
    {
      res.push_back(-1);
      continue;
    }

    res.push_back(diff + a + diff - c);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}