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
    int a, b, c;
    std::vector<int> v;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    sort(v.begin(), v.end());

    if (v[2] + v[1] >= 10)
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