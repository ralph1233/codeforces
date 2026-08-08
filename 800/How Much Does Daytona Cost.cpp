#include <iostream>
#include <string>
#include <vector>

int main()
{
  int t;
  std::vector<std::string> v;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    bool is_found = false;
    int n, k;

    std::cin >> n;
    std::cin >> k;

    for (int j = 0; j < n; j++)
    {
      int nb;

      std::cin >> nb;

      if (nb == k)
      {
        is_found = true;
      }
    }

    if (is_found)
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