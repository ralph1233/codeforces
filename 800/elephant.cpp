#include <iostream>

int main()
{

  int point, res = 0;

  std::cin >> point;

  while (point != 0)
  {

    if (point >= 5)
    {
      point -= 5;
    }
    else if (point >= 4)
    {
      point -= 4;
    }
    else if (point >= 3)
    {
      point -= 3;
    }
    else if (point >= 2)
    {
      point -= 2;
    }
    else
    {
      point--;
    }

    res++;
  }

  std::cout << res << "\n";

  return 0;
}