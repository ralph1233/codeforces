#include <iostream>
#include <cmath>

int main()
{

  int k, n, w, res = 0;

  std::cin >> k;
  std::cin >> n;
  std::cin >> w;

  for (int i = 1; i <= w; i++)
  {
    res += (i * k);
  }

  std::cout << std::max(res - n, 0) << "\n";

  return 0;
}