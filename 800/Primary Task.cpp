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
    int a;

    std::cin >> a;

    if (a < 100)
    {
      res.push_back("NO");
      continue;
    }

    std::string s = std::to_string(a);

    if (s[0] == '1' && s[1] == '0')
    {

      if (s[2] == '0')
      {
        res.push_back("NO");
        continue;
      }

      if (std::stoi(s.substr(2)) >= 2)
      {
        res.push_back("YES");
      }
      else
      {
        res.push_back("NO");
      }
    }
    else
    {
      res.push_back("NO");
    }
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}