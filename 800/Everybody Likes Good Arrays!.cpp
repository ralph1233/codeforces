#include <iostream>
#include <vector>

int main()
{
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n, count = 0;
    std::vector<int> nbs;

    std::cin >> n;

    for (int j = 0; j < n; j++)
    {
      int nb;

      std::cin >> nb;

      nbs.push_back(nb);
    }

    for (int j = 0; j < n - 1; j++)
    {
      if (nbs[j] % 2 == nbs[j + 1] % 2)
      {
        count++;
      }
    }

    res.push_back(count);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}