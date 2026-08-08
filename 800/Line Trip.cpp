#include <iostream>
#include <vector>

int main()
{
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n, x, max;
    std::vector<int> v;

    std::cin >> n;
    std::cin >> x;

    for (int j = 0; j < n; j++)
    {
      int nb;

      std::cin >> nb;

      v.push_back(nb);
    }

    max = v[0];

    for (int j = 1; j < n; j++)
    {
      if (v[j] - v[j - 1] > max)
      {
        max = v[j] - v[j - 1];
      }
    }

    if ((x - v[v.size() - 1]) * 2 > max)
    {
      max = (x - v[v.size() - 1]) * 2;
    }

    res.push_back(max);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}