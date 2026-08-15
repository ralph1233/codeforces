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
    int a, b, c;
    std::vector<std::vector<int>> all_possibilities;
    std::vector<int> tmp;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    all_possibilities.push_back({a, b, c});
    all_possibilities.push_back({a, b, a + b});
    all_possibilities.push_back({a, a + c, c});
    all_possibilities.push_back({b + c, b, c});

    for (int j = 0; j < 4; j++)
    {
      sort(all_possibilities[j].begin(), all_possibilities[j].end());

      tmp.push_back(all_possibilities[j][2] - all_possibilities[j][0]);
    }

    sort(tmp.begin(), tmp.end());

    res.push_back(tmp[0]);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}