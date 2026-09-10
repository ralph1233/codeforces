#include <iostream>
#include <vector>
#include <string>

int main()
{
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n;

    std::cin >> n;

    std::string s = std::to_string(n), s1 = "";

    for (int j = 0; j < s.length(); j++)
    {
      s1 += s[0];
    }

    if (std::stoi(s1) > n)
    {
      res.push_back((s[0] - '0' - 1) + 9 * (s.length() - 1));
    }
    else
    {
      res.push_back((s[0] - '0') + 9 * (s.length() - 1));
    }
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}