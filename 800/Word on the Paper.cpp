#include <iostream>
#include <vector>
#include <string>

int main()
{
  int t;
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    std::string s = "";

    for (int j = 0; j < 64; j++)
    {
      char c;

      std::cin >> c;

      if (c != '.')
      {
        s += c;
      }
    }

    res.push_back(s);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }
}