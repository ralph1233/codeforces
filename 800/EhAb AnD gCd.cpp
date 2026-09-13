#include <iostream>
#include <vector>

int main()
{
  int t;
  std::vector<std::vector<int>> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int x;

    std::cin >> x;

    res.push_back({1, x - 1});
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i][0] << " " << res[i][1] << "\n";
  }

  return 0;
}
