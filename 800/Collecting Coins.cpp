#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
  int t;
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int a, b, c, n;
    std::vector<int> nbs;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> n;

    nbs.push_back(a);
    nbs.push_back(b);
    nbs.push_back(c);

    sort(nbs.begin(), nbs.end());

    n -= nbs[2] - nbs[1];
    n -= nbs[2] - nbs[0];

    if (n < 0)
    {
      res.push_back("NO");
    }
    else if (n % 3 == 0)
    {
      res.push_back("YES");
    }
    else
    {
      res.push_back("NO");
    }
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}
