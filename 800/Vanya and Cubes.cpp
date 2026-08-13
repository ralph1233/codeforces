#include <iostream>

int main()
{
  int n, i = 1, cubes = 1;

  std::cin >> n;

  while (true)
  {
    i++;

    int tmp = 0;

    for (int j = 1; j <= i; j++)
    {
      tmp += j;
    }

    if (cubes + tmp > n)
    {
      i--;
      break;
    }

    cubes += tmp;
  }

  std::cout << i << "\n";

  return 0;
}