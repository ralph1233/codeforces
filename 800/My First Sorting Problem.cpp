#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
  int t;
  std::vector<std::vector<int>> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int a, b;
    std::vector<int> nbs;

    std::cin >> a;
    std::cin >> b;

    nbs.push_back(a);
    nbs.push_back(b);

    sort(nbs.begin(), nbs.end());

    res.push_back(nbs);
  }

  for (int i = 0; i < t; i++)
  {

    for (int j = 0; j < 2; j++)
    {
      std::cout << res[i][j] << " ";
    }

    std::cout << "\n";
  }

  return 0;
}