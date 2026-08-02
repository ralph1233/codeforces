#include <iostream>
#include <set>
#include <string>

int main()
{

  std::string w;
  std::set<char> s;

  std::getline(std::cin, w);

  for (int i = 0; i < w.length(); i++)
  {
    int ascii_values = int(w[i]);

    if (ascii_values >= 97 && ascii_values <= 122)
    {
      s.insert(w[i]);
    }
  }

  std::cout << s.size() << '\n';

  return 0;
}