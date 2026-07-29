#include <iostream>
#include <string>
#include <algorithm>

int main()
{
  int l = 0, u = 0;
  std::string w;

  std::cin >> w;

  for (char &c : w)
  {
    if (std::isupper(c))
    {
      u++;
    }
    else
    {
      l++;
    }
  }

  std::transform(w.begin(), w.end(), w.begin(), [u, l](char c)
                 {
                   if (u > l)
                   {
                     return std::toupper(c);
                   }
                   return std::tolower(c);
                 });

  std::cout << w << "\n";

  return 0;
}