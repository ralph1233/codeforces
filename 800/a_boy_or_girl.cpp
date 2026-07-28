#include <iostream>
#include <set>

int main()
{
  std::string w;

  std::cin >> w;

  std::set<char> s;

  for (int i = 0; i < w.length(); i++)
  {
    s.insert(w[i]);
  }

  if (s.size() % 2 == 0)
  {
    std::cout << "CHAT WITH HER!\n";
  }
  else
  {
    std::cout << "IGNORE HIM!\n";
  }

  return 0;
}