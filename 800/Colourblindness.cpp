#include <iostream>
#include <string>
#include <vector>

bool is_valid(int n, std::string s1, std::string s2)
{

  for (int i = 0; i < n; i++)
  {
    if (s1[i] == 'R' && s2[i] != 'R')
    {
      return false;
    }

    if (s1[i] != 'R' && s2[i] == 'R')
    {
      return false;
    }
  }

  return true;
}

int main()
{
  int t;
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n;
    std::string s1, s2;

    std::cin >> n;
    std::cin >> s1;
    std::cin >> s2;

    if (is_valid(n, s1, s2))
    {
      res.push_back("YES");
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