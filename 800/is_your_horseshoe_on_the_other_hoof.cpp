#include <iostream>
#include <set>

int main()
{

  std::set<int> s;

  for (int i = 0; i < 4; i++)
  {
    int c;

    std::cin >> c;

    s.insert(c);
  }

  std::cout << 4 - s.size() << "\n";

  return 0;
}