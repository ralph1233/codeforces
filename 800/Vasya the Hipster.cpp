#include <iostream>

int main()
{
  int a, b, res1 = 0, res2 = 0;

  std::cin >> a;
  std::cin >> b;

  while (a != 0 || b != 0)
  {
    if (a != 0 && b != 0)
    {
      a--;
      b--;
      res1++;
    }
    else if (a != 0 && b == 0)
    {
      a -= 2;

      if (a < 0)
      {
        a = 0;
        continue;
      }

      res2++;
    }
    else if (a == 0 && b != 0)
    {
      b -= 2;

      if (b < 0)
      {
        b = 0;
        continue;
      }

      res2++;
    }
  }

  std::cout << res1 << " " << res2 << "\n";

  return 0;
}