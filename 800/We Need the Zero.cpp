#include <iostream>
#include <vector>

int result(std::vector<int> nbs)
{

  for (int i = 0; i <= 255; i++)
  {
    std::vector<int> tmp = nbs;

    for (int j = 0; j < tmp.size(); j++)
    {
      tmp[j] ^= i;
    }

    int res = tmp[0];

    for (int j = 1; j < tmp.size(); j++)
    {
      res ^= tmp[j];
    }

    if (res == 0)
    {
      return i;
    }
  }

  return -1;
}

int main()
{
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n;
    std::vector<int> nbs;

    std::cin >> n;

    for (int j = 0; j < n; j++)
    {
      int nb;

      std::cin >> nb;

      nbs.push_back(nb);
    }

    res.push_back(result(nbs));
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}