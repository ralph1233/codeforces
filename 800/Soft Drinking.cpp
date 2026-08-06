#include <iostream>

int main()
{

  int n, k, l, c, d, p, nl, np, min;

  std::cin >> n;
  std::cin >> k;
  std::cin >> l;
  std::cin >> c;
  std::cin >> d;
  std::cin >> p;
  std::cin >> nl;
  std::cin >> np;

  int res1 = k * l / nl;
  min = res1;

  int res2 = c * d;

  if (min > res2)
  {
    min = res2;
  }

  int res3 = p / np;

  if (min > res3)
  {
    min = res3;
  }

  std::cout << min / n << "\n";

  return 0;
}