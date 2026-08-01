#include <iostream>
#include <vector>
#include <utility>

int main()
{

  int t;
  std::vector<std::pair<int, int>> v;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int a, b;

    std::cin >> a;
    std::cin >> b;

    v.push_back({a, b});
  }

  for (int i = 0; i < t; i++)
  {
    int a = v[i].first;
    int b = v[i].second;

    if (a % b == 0)
    {
      std::cout << 0 << "\n";
    }
    else
    {
      std::cout << b - (a % b) << "\n";
    }
  }

  return 0;
}