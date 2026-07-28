#include <iostream>
#include <string>

int main()
{
  int n;
  int res = 0;

  std::cin >> n;

  while (n--)
  {
    std::string input;
    std::cin >> input;

    if (input.find("+") != std::string::npos)
    {
      res++;
    }
    else
    {
      res--;
    }
  }

  std::cout << res << "\n";

  return 0;
}