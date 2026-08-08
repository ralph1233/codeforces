#include <iostream>
#include <vector>

int main()
{
  int t;
  std::vector<int> v;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int a, b;

    std::cin >> a;
    std::cin >> b;

    int diff = abs(a - b);

    if (diff == 0)
    {
      v.push_back(0);
    }
    else
    {
      if (diff % 10 == 0)
      {
        v.push_back(diff / 10);
      }
      else
      {
        v.push_back(diff / 10 + 1);
      }
    }
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << v[i] << "\n";
  }

  return 0;
}