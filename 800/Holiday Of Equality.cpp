#include <iostream>
#include <vector>

int main()
{

  int n, res = 0, max, nb;
  std::vector<int> v;

  std::cin >> n;
  std::cin >> nb;

  max = nb;

  v.push_back(nb);

  for (int i = 1; i < n; i++)
  {
    std::cin >> nb;

    if (nb > max)
    {
      max = nb;
    }

    v.push_back(nb);
  }

  for (int i = 0; i < n; i++)
  {
    if (max != v[i])
    {
      res += (max - v[i]);
    }
  }

  std::cout << res << "\n";

  return 0;
}