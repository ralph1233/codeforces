#include <iostream>

bool is_composite(int n)
{
  if (n <= 2)
  {
    return false;
  }

  if (n % 2 == 0)
  {
    return true;
  }

  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      return true;
    }
  }

  return false;
}

int main()
{

  int n, j = 0;

  std::cin >> n;

  for (int i = 3; i <= n - 3; i++)
  {
    if (is_composite(i) && is_composite(n - 3 - j))
    {
      std::cout << i << " " << n - 3 - j << "\n";
      break;
    }
    j++;
  }

  return 0;
}