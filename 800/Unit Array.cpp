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

    std::cin >> n;

    for (int j = 0; j < n; j++)
    {
      int nb;

      std::cin >> nb;

      if (nb == -1)
      {
        count++;
      }
    }

    if (count % 2 == 0 && count <= n / 2)
    {
      res.push_back(0);
      continue;
    }

    int middle = n / 2;

    if (middle % 2 != 0)
    {
      middle--;
    }

    if (count >= n / 2)
    {
      res.push_back(count - middle);
      continue;
    }

    res.push_back(1);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}