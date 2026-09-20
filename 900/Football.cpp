#include <iostream>
#include <string>

bool is_dangerous(std::string s)
{
  int count = 1;

  for (int i = 0; i < s.length() - 1; i++)
  {
    if (s[i] == s[i + 1])
    {
      count++;

      if (count == 7)
      {
        return true;
      }
    }
    else
    {
      count = 1;
    }
  }

  return false;
}

int main()
{
  std::string s;

  std::cin >> s;

  if (is_dangerous(s))
  {
    std::cout << "YES\n";
  }
  else
  {
    std::cout << "NO\n";
  }

  return 0;
}