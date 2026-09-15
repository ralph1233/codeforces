#include <iostream>
#include <vector>

int main()
{
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n, k, count = 0, sum = 0;

    std::cin >> n;
    std::cin >> k;

    for (int j = 0; j < n; j++)
    {
      int nb;

      std::cin >> nb;

      if (nb >= k)
      {
        sum += nb;
      }
      else
      {
        if (sum > 0 && nb == 0)
        {
          sum--;
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