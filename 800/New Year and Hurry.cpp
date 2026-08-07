#include <iostream>

int main()
{

  int n, k, min = 0, i = 1;

  std::cin >> n;
  std::cin >> k;

  for (i = 1; i <= n; i++)
  {
    min += (i * 5);

    if (240 - min < k)
    {
      break;
    }
  }

  std::cout << i - 1 << "\n";

  return 0;
}