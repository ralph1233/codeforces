#include <iostream>

int main()
{

  int n, m;
  bool is_left = true;

  std::cin >> n;
  std::cin >> m;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (i % 2 == 0)
      {
        std::cout << "#";
      }
      else
      {
        if (is_left && j == m - 1)
        {
          std::cout << "#";
        }
        else if (!is_left && j == 0)
        {
          std::cout << "#";
        }
        else
        {
          std::cout << ".";
        }
      }
    }

    if (i % 2 != 0)
    {
      is_left = !is_left;
    }
    std::cout << "\n";
  }

  return 0;
}