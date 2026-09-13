#include <iostream>
#include <vector>
#include <climits>

int main()
{
  int t;
  std::vector<long long int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    long long int n, min_a = INT_MAX, min_b = INT_MAX, sum = 0;
    std::vector<long long int> candies_a, candies_b;

    std::cin >> n;

    for (int j = 0; j < n; j++)
    {
      long long int nb;

      std::cin >> nb;

      if (min_a > nb)
      {
        min_a = nb;
      }

      candies_a.push_back(nb);
    }

    for (int j = 0; j < n; j++)
    {
      long long int nb;

      std::cin >> nb;

      if (min_b > nb)
      {
        min_b = nb;
      }

      candies_b.push_back(nb);
    }

    for (int j = 0; j < n; j++)
    {
      long long int diff1 = candies_a[j] - min_a;
      long long int diff2 = candies_b[j] - min_b;

      sum += diff1 + diff2;

      if (diff1 > diff2)
      {
        sum -= diff2;
      }
      else
      {
        sum -= diff1;
      }
    }

    res.push_back(sum);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}