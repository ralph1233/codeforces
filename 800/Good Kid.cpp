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
    int n, mult = 1;
    std::vector<int> nbs;

    std::cin >> n;

    for (int j = 0; j < n; j++)
    {
      int nb;

      std::cin >> nb;

      nbs.push_back(nb);
    }

    sort(nbs.begin(), nbs.end());

    nbs[0]++;

    for (int j = 0; j < n; j++)
    {
      mult *= nbs[j];
    }

    res.push_back(mult);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}