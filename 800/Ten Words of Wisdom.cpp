#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

int main()
{
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n;
    std::vector<std::pair<int, int>> nbs;
    std::vector<int> sorted_vector;

    std::cin >> n;

    for (int j = 0; j < n; j++)
    {
      int a, b;

      std::cin >> a;
      std::cin >> b;

      if (a <= 10)
      {
        sorted_vector.push_back(b);
      }

      nbs.push_back({a, b});
    }

    sort(sorted_vector.begin(), sorted_vector.end());

    int highest_quality = sorted_vector[sorted_vector.size() - 1];

    auto it = std::find_if(nbs.begin(), nbs.end(), [highest_quality](std::pair<int, int> p)
                           { return p.second == highest_quality; });

    res.push_back(std::distance(nbs.begin(), it) + 1);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}