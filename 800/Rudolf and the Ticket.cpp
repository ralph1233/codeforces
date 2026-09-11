#include <iostream>
#include <vector>

int main()
{
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n, m, k, count = 0;
    std::vector<int> b, c;

    std::cin >> n;
    std::cin >> m;
    std::cin >> k;

    for (int j = 0; j < n; j++)
    {
      int nb;

      std::cin >> nb;

      b.push_back(nb);
    }

    for (int j = 0; j < m; j++)
    {
      int nb;

      std::cin >> nb;

      c.push_back(nb);
    }

    for (int u = 0; u < n; u++)
    {
      for (int l = 0; l < m; l++)
      {
        if (b[u] + c[l] <= k)
        {
          count++;
        }
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