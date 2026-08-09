#include <iostream>
#include <vector>

int main()
{
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int a, b, min;

    std::cin >> a;
    std::cin >> b;

    min = (a - a) + (b - a);

    for (int j = a + 1; j <= b; j++)
    {
      int calc = (j - a) + (b - j);

      if (min > calc)
      {
        min = calc;
      }
    }

    res.push_back(min);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}