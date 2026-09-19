#include <iostream>
#include <string>
#include <vector>

int main()
{
  int t;
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n, s, x, sum = 0;

    std::cin >> n;
    std::cin >> s;
    std::cin >> x;

    for (int j = 0; j < n; j++)
    {
      int nb;

      std::cin >> nb;

      sum += nb;
    }

    if (sum > s)
    {
      res.push_back("NO");
      continue;
    }

    if (sum == s)
    {
      res.push_back("YES");
      continue;
    }

    int diff = s - sum;

    if (diff % x == 0)
    {
      res.push_back("YES");
    }
    else
    {
      res.push_back("NO");
    }
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}