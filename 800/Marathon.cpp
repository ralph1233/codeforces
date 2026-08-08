#include <iostream>
#include <vector>

int main()
{

  int t;
  std::vector<int> v;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int a, res = 0;

    std::cin >> a;

    for (int j = 0; j < 3; j++)
    {
      int nb;

      std::cin >> nb;

      if (nb > a)
      {
        res++;
      }
    }

    v.push_back(res);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << v[i] << "\n";
  }

  return 0;
}