#include <iostream>
#include <vector>

int main()
{

  int t;

  std::vector<int> v;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int nb;

    std::cin >> nb;

    if (nb < 1400)
    {
      v.push_back(4);
    }
    else if (nb < 1600)
    {
      v.push_back(3);
    }
    else if (nb < 1900)
    {
      v.push_back(2);
    }
    else
    {
      v.push_back(1);
    }
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << "Division " << v[i] << "\n";
  }

  return 0;
}