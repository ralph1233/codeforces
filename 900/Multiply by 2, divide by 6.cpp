#include <iostream>
#include <vector>

int main()
{
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n, c = 0;

    std::cin >> n;

    while (true)
    {
      int remainder = n % 6;

      if (n == 1)
      {
        break;
      }

      if (remainder == 0)
      {
        c++;
        n /= 6;
      }
      else if (remainder == 3)
      {
        c++;
        n *= 2;
      }
      else
      {
        c = -1;
        break;
      }
    }

    res.push_back(c);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}