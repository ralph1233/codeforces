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
    int n, count = 0;
    std::vector<int> tmp;

    std::cin >> n;

    for (int j = 0; j < n; j++)
    {
      int nb;

      std::cin >> nb;

      tmp.push_back(nb);
    }

    sort(tmp.begin(), tmp.end());

    for (int j = 1; j < tmp.size(); j++)
    {
      count += tmp[j] - tmp[0];
    }

    res.push_back(count);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}