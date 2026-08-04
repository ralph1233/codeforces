#include <iostream>
#include <string>
#include <vector>

int main()
{
  int t;

  std::vector<std::string> v;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    std::string s;

    std::cin >> s;

    v.push_back(s);
  }

  for (int i = 0; i < t; i++)
  {
    if (tolower(v[i][0]) == 'y' && tolower(v[i][1]) == 'e' && tolower(v[i][2]) == 's')
    {
      std::cout << "YES\n";
    }
    else
    {
      std::cout << "NO\n";
    }
  }

  return 0;
}