#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main()
{
  int t;
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int a, b, c, d;
    std::vector<int> tmp;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;

    tmp.push_back(a);
    tmp.push_back(b);
    tmp.push_back(c);
    tmp.push_back(d);

    sort(tmp.begin(), tmp.end());

    if (tmp[3] == tmp[0])
    {
      res.push_back("YES");
    }
    else
    {
      res.push_back("NO");
    }
  }

  for (int i = 0; i < res.size(); i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}