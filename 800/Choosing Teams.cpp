#include <iostream>

int main()
{

  int n, k, res = 0;

  std::cin >> n;
  std::cin >> k;

  for (int i = 0; i < n; i++)
  {
    int nb;

    std::cin >> nb;

    if (nb + k <= 5)
    {
      res++;
    }
  }

  std::cout << res / 3 << "\n";

  return 0;
}