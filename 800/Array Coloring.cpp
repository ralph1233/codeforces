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
    int n, sum = 0;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
      int nb;

      std::cin >> nb;

      sum += nb;
    }

    if (sum % 2 == 0)
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