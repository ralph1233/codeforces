#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int main()
{
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n, min = INT_MAX;
    std::vector<int> nbs, a, b;

    std::cin >> n;

    for (int j = 0; j < n; j++)
    {
      int nb;

      std::cin >> nb;

      nbs.push_back(nb);
    }

    sort(nbs.begin(), nbs.end());

    for (int j = 0; j < n - 1; j++)
    {
      int diff = nbs[j + 1] - nbs[j];

      if (min > diff)
      {
        min = diff;
      }
    }

    res.push_back(min);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}