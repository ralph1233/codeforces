#include <iostream>
#include <vector>

int main()
{
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n;

    std::cin >> n;

    if (n % 2 == 0)
    {
      res.push_back(n / 2);
    }
    else
    {
      res.push_back(n / 2 + 1);
    }
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}
