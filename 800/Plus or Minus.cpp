#include <iostream>
#include <vector>

int main()
{
  int t;
  std::vector<char> v;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int a, b, c;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    if (a + b == c)
    {
      v.push_back('+');
    }

    if (a - b == c)
    {
      v.push_back('-');
    }
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << v[i] << "\n";
  }

  return 0;
}