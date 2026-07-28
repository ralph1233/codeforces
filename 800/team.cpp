#include <iostream>

int main()
{

  int n;
  int res = 0;

  std::cin >> n;

  while (n--)
  {

    int petya, vasya, tonya;

    std::cin >> petya;
    std::cin >> vasya;
    std::cin >> tonya;

    if (petya + vasya + tonya >= 2)
    {
      res++;
    }
  }

  std::cout << res << std::endl;

  return 0;
}