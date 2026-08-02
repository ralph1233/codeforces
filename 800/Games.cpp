#include <iostream>
#include <utility>
#include <vector>

int main()
{
  int n, res = 0;
  std::vector<std::pair<int, int>> v;

  std::cin >> n;

  for (int i = 0; i < n; i++)
  {
    int a, b;

    std::cin >> a;
    std::cin >> b;

    v.push_back({a, b});
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      std::pair<int, int> team1 = v[i];
      std::pair<int, int> team2 = v[j];

      if (team1.first == team2.second)
      {
        res++;
      }

      if (team2.first == team1.second)
      {
        res++;
      }
    }
  }

  std::cout << res << "\n";

  return 0;
}