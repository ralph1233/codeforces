#include <iostream>
#include <vector>

int main()
{
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int nb;

    std::cin >> nb;

    res.push_back(nb - 1);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}