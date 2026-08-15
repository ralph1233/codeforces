#include <iostream>
#include <string>
#include <vector>

int main()
{
  int t;
  std::vector<char> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int count_a = 0;
    std::string s;

    std::cin >> s;

    for (int j = 0; j < s.length(); j++)
    {
      if (s[j] == 'A')
      {
        count_a++;
      }
    }

    if (count_a >= 3)
    {
      res.push_back('A');
    }
    else
    {
      res.push_back('B');
    }
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}