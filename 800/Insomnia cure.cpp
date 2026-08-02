#include <iostream>
#include <set>

int main()
{

  int k, l, m, n, d;
  std::set<int> s;

  std::cin >> k;
  std::cin >> l;
  std::cin >> m;
  std::cin >> n;
  std::cin >> d;

  for (int i = 0; i < 4; i++)
  {

    for (int j = 1; j <= d; j++)
    {
      if (i == 0)
      {
        if (j % k == 0)
        {
          s.insert(j);
        }
      }

      if (i == 1)
      {
        if (j % l == 0)
        {
          s.insert(j);
        }
      }

      if (i == 2)
      {
        if (j % m == 0)
        {
          s.insert(j);
        }
      }

      if (i == 3)
      {
        if (j % n == 0)
        {
          s.insert(j);
        }
      }
    }
  }

  std::cout << s.size() << "\n";

  return 0;
}