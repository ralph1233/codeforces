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
    std::string s;

    std::cin >> s;

    res.push_back((s[0] - '0') + (s[2] - '0'));
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}