#include <iostream>
#include <vector>

int main()
{
  int t;
  std::vector<int> v;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int a, b, c;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    if (a == b)
    {
      v.push_back(c);
    }

    if (a == c)
    {
      v.push_back(b);
    }

    if (b == c)
    {
      v.push_back(a);
    }
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << v[i] << "\n";
  }

  return 0;
}