#include <iostream>
#include <vector>

int main()
{

  int t;
  std::vector<int> v;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n, res = 0, max = 0;

    std::cin >> n;

    for (int j = 0; j < n; j++)
    {
      int nb;

      std::cin >> nb;

      if (nb == 0)
      {
        res++;

        if (res > max)
        {
          max = res;
        }
      }
      else
      {
        if (res > max)
        {
          max = res;
        }
        res = 0;
      }
    }

    v.push_back(max);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << v[i] << "\n";
  }

  return 0;
}