#include <iostream>
#include <string>
#include <vector>

int main()
{
  int t;
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int a, b, c;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    int anna_c, katie_c;

    if (c % 2 == 0)
    {
      anna_c = c / 2;
      katie_c = c / 2;
    }
    else
    {
      anna_c = c / 2 + 1;
      katie_c = c - anna_c;
    }

    if (anna_c + a > katie_c + b)
    {
      res.push_back("First");
    }
    else
    {
      res.push_back("Second");
    }
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}