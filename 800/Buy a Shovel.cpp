#include <iostream>

int main()
{
  int k, r, res = 1;

  std::cin >> k;
  std::cin >> r;

  while (true)
  {
    if ((k * res) % 10 == 0 || (k * res) % 10 == r)
    {
      break;
    }

    res++;
  }

  std::cout << res << "\n";

  return 0;
}