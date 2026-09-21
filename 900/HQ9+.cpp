#include <iostream>
#include <string>

bool result(std::string s)
{

  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
    {
      return true;
    }
  }

  return false;
}

int main()
{
  std::string s;

  std::cin >> s;

  if (result(s))
  {
    std::cout << "YES\n";
  }
  else
  {
    std::cout << "NO\n";
  }

  return 0;
}