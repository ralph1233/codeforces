#include <iostream>
#include <vector>

int main()
{
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int a, b, n, count = 0;

    std::cin >> a;
    std::cin >> b;
    std::cin >> n;

    while (a <= n && b <= n)
    {
      if (a > b)
      {
        b += a;
      }
      else
      {
        a += b;
      }

      count++;
    }

    res.push_back(count);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}