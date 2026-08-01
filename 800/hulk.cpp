#include <iostream>

int main()
{
  int n;

  std::cin >> n;

  for (int i = 1; i <= n; i++)
  {

    if (i % 2 == 0)
    {
      std::cout << "I love";
    }
    else
    {
      std::cout << "I hate";
    }

    if (i != n)
    {
      std::cout << " that ";
    }
    else
    {
      std::cout << " it";
    }
  }

  std::cout << '\n';

  return 0;
}