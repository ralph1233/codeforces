#include <iostream>
#include <vector>

int main()
{
  int t;
  std::vector<int> v;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n;

    std::cin >> n;

    if (n == 1 || n == 2)
    {
      v.push_back(0);
      continue;
    }

    if (n % 2 == 0)
    {
      v.push_back(n / 2 - 1);
    }
    else
    {
      v.push_back(n / 2);
    }
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << v[i] << "\n";
  }

  return 0;
}
