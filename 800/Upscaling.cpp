#include <iostream>
#include <vector>
#include <string>
#include <utility>

int main()
{
  int t;
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n;
    std::string s = "", start_s = "##", end_s = "..";

    std::cin >> n;

    for (int j = 1; j <= n * 2; j += 2)
    {
      bool flip = true;

      for (int a = 1; a <= n * 2; a += 2)
      {
        if (flip)
        {
          s += start_s;
        }
        else
        {
          s += end_s;
        }

        flip = !flip;
      }

      flip = true;
      s += "\n";

      for (int a = 1; a <= n * 2; a += 2)
      {
        if (flip)
        {
          s += start_s;
        }
        else
        {
          s += end_s;
        }

        flip = !flip;
      }

      s += "\n";

      std::swap(start_s, end_s);
    }

    res.push_back(s);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i];
  }

  return 0;
}