#include <iostream>
#include <vector>
#include <string>

int main()
{
  int t;
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    long long int n, k;

    std::cin >> n;
    std::cin >> k;

    if (n % 2 == 0)
    {
      res.push_back("YES");
    }
    else
    {
      if (k % 2 == 0)
      {
        res.push_back("NO");
      }
      else
      {
        res.push_back("YES");
      }
    }
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}