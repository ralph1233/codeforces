#include <iostream>
#include <string>

int main()
{
  int n, res = 0;
  std::string color;

  std::cin >> n;
  std::cin >> color;

  for (int i = 0; i < n; i++)
  {
    if (color[i] == color[i + 1])
    {
      res++;
    }
  }

  std::cout << res << std::endl;

  return 0;
}