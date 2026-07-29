#include <iostream>

int main()
{
  int a, b, res = 0;

  std::cin >> a;
  std::cin >> b;

  while (true)
  {
    if (a > b)
    {
      break;
    }

    a *= 3;
    b *= 2;
    res++;
  }

  std::cout << res << std::endl;

  return 0;
}