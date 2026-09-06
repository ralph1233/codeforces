#include <iostream>
#include <vector>

int main()
{
  int t;
  std::vector<char> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int a = 0, b = 0, c = 0;

    for (int j = 0; j < 9; j++)
    {
      char _c;

      std::cin >> _c;

      if (_c == 'A')
      {
        a++;
      }
      if (_c == 'B')
      {
        b++;
      }

      if (_c == 'C')
      {
        c++;
      }
    }

    if (a != 3)
    {
      res.push_back('A');
    }

    if (b != 3)
    {
      res.push_back('B');
    }

    if (c != 3)
    {
      res.push_back('C');
    }
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}