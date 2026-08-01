#include <iostream>
#include <string>
#include <set>

//
//
//

int main()
{
  int n;
  std::string s;
  std::set<char> set;

  std::cin >> n;
  std::cin >> s;

  for (int i = 0; i < n; i++)
  {
    set.insert(std::tolower(s[i]));
  }

  if (set.size() == 26)
  {
    std::cout << "YES\n";
  }
  else
  {
    std::cout << "NO\n";
  }

  return 0;
}
