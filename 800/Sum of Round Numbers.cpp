#include <iostream>
#include <vector>

int main()
{
  int t;
  std::vector<std::vector<int>> v;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n;
    std::vector<int> tmp;

    std::cin >> n;

    while (n != 0)
    {
      if (n >= 10000)
      {
        tmp.push_back(10000);
        n %= 10000;
      }
      else if (n >= 1000)
      {
        tmp.push_back(n / 1000 * 1000);
        n %= 1000;
      }
      else if (n >= 100)
      {
        tmp.push_back(n / 100 * 100);
        n %= 100;
      }
      else if (n >= 10)
      {
        tmp.push_back(n / 10 * 10);
        n %= 10;
      }
      else
      {
        tmp.push_back(n);
        n = 0;
      }
    }

    v.push_back(tmp);
  }

  for (int i = 0; i < v.size(); i++)
  {
    std::cout << v[i].size() << "\n";

    for (int j = 0; j < v[i].size(); j++)
    {
      std::cout << v[i][j] << " ";
    }
    std::cout << "\n";
  }

  return 0;
}