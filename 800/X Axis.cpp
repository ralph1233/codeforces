#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

int main()
{
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int x1, x2, x3;
    std::vector<int> distances;

    std::cin >> x1;
    std::cin >> x2;
    std::cin >> x3;

    int d1 = std::abs(x2 - x1) + std::abs(x3 - x1);
    int d2 = std::abs(x1 - x2) + std::abs(x3 - x2);
    int d3 = std::abs(x1 - x3) + std::abs(x2 - x3);

    distances.push_back(d1);
    distances.push_back(d2);
    distances.push_back(d3);

    sort(distances.begin(), distances.end());

    res.push_back(distances[0]);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}