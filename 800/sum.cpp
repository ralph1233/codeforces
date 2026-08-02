#include <iostream>
#include <vector>
#include <string>

int main()
{

  int t;
  std::vector<std::string> v;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    bool is_sum = false;
    int a, b, c;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    if (a + b == c)
    {
      is_sum = true;
    }

    if (a + c == b)
    {
      is_sum = true;
    }

    if (b + c == a)
    {
      is_sum = true;
    }

    if (is_sum)
    {
      v.push_back("YES");
    }
    else
    {
      v.push_back("NO");
    }
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << v[i] << "\n";
  }

  return 0;
}