#include <iostream>
#include <set>

int main()
{

  int n, p, q;
  std::set<int> s;

  std::cin >> n;
  std::cin >> p;

  for (int i = 0; i < p; i++)
  {
    int level;

    std::cin >> level;

    s.insert(level);
  }

  std::cin >> q;

  for (int i = 0; i < q; i++)
  {
    int level;

    std::cin >> level;

    s.insert(level);
  }

  if (s.size() == n)
  {
    std::cout << "I become the guy.\n";
  }
  else
  {
    std::cout << "Oh, my keyboard!\n";
  }

  return 0;
}