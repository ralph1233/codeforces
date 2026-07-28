#include <iostream>

void can_divide(int w)
{
  if (w % 2 == 1 || w == 2)
  {
    std::cout << "NO\n";
    return;
  }

  std::cout << "YES\n";
}

int main()
{
  int w;

  std::cin >> w;

  can_divide(w);

  return 0;
}