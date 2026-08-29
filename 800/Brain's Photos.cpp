#include <iostream>

int main()
{
  int n, m;
  bool is_colored = false;

  std::cin >> n;
  std::cin >> m;

  for (int i = 0; i < n * m; i++)
  {
    char c;

    std::cin >> c;

    if (c == 'Y' || c == 'M' || c == 'C')
    {
      is_colored = true;
    }
  }

  if (is_colored)
  {
    std::cout << "#Color\n";
  }
  else
  {
    std::cout << "#Black&White\n";
  }

  return 0;
}