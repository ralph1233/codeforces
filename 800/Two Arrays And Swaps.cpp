#include <iostream>
#include <vector>
#include <algorithm>

int main()
{

  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n, k, sum = 0;
    std::vector<int> a, b;

    std::cin >> n;
    std::cin >> k;

    for (int j = 0; j < n; j++)
    {
      int nb;

      std::cin >> nb;

      a.push_back(nb);
    }

    for (int j = 0; j < n; j++)
    {
      int nb;

      std::cin >> nb;

      b.push_back(nb);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int b_size = b.size();

    for (int j = 0; j < k; j++)
    {
      if (b[b_size - j - 1] > a[j])
      {
        a[j] = b[b_size - j - 1];
      }
    }

    for (int j = 0; j < n; j++)
    {
      sum += a[j];
    }

    res.push_back(sum);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}