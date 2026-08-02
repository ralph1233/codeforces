#include <iostream>

//

int main()
{

  long long int n, res = 0;

  std::cin >> n;

  while (n != 0)
  {

    int denominator;

    if (n >= 100)
    {
      denominator = 100;
    }
    else if (n >= 20)
    {
      denominator = 20;
    }
    else if (n >= 10)
    {
      denominator = 10;
    }
    else if (n >= 5)
    {
      denominator = 5;
    }
    else if (n >= 1)
    {
      denominator = 1;
    }

    res += n / denominator;
    n %= denominator;
  }

  std::cout << res << '\n';

  return 0;
}