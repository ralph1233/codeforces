#include <iostream>
#include <map>

int main()
{

  int n;
  std::map<int, int> m;

  std::cin >> n;

  for (int i = 1; i <= n; i++)
  {
    int p;

    std::cin >> p;

    m.insert({p, i});
  }

  for (int i = 1; i <= n; i++)
  {
    std::cout << m[i] << " ";
  }

  std::cout << "\n";

  return 0;
}