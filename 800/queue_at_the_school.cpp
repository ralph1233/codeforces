#include <iostream>
#include <string>

int main()
{
  int n, t;
  std::string s;

  std::cin >> n;
  std::cin >> t;
  std::cin >> s;

  for (int i = 0; i < t; i++)
  {
    for (int j = 0; j < s.length();)
    {
      if (s[j] == 'B' && s[j + 1] == 'G')
      {
        s[j + 1] = 'B';
        s[j] = 'G';
        j += 2;
      }
      else
      {
        j++;
      }
    }
  }

  std::cout << s << "\n";

  return 0;
}