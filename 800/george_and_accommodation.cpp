#include <iostream>

int main()
{
  int n, res = 0;

  std::cin >> n;

  for (int i = 0; i < n; i++)
  {
    int p, q;

    std::cin >> p;
    std::cin >> q;

    if (q - p >= 2)
    {
      res++;
    }
  }

  std::cout << res << '\n';

  return 0;
}