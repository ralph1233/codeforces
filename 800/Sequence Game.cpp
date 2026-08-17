#include <iostream>
#include <vector>

int main()
{
  int t;
  std::vector<std::vector<int>> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n;
    std::vector<int> nbs;
    std::vector<int> new_vector;

    std::cin >> n;

    for (int j = 0; j < n; j++)
    {
      int nb;

      std::cin >> nb;

      nbs.push_back(nb);
    }

    new_vector.push_back(nbs[0]);

    for (int j = 1; j < n; j++)
    {
      if (nbs[j] >= nbs[j - 1])
      {
        new_vector.push_back(nbs[j]);
      }
      else
      {
        new_vector.push_back(nbs[j]);
        new_vector.push_back(nbs[j]);
      }
    }

    res.push_back(new_vector);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i].size() << "\n";

    for (int j = 0; j < res[i].size(); j++)
    {
      std::cout << res[i][j] << " ";
    }

    std::cout << "\n";
  }

  return 0;
}