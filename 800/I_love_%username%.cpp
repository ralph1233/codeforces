#include <iostream>

int main()
{
  int n, min, max, nb, res = 0;

  std::cin >> n;
  std::cin >> nb;

  max = nb;
  min = nb;

  for (int i = 1; i < n; i++)
  {
    std::cin >> nb;

    if (nb > max)
    {
      max = nb;
      res++;
    }

    if (min > nb)
    {
      min = nb;
      res++;
    }
  }

  std::cout << res << "\n";

  return 0;
}