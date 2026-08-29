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
    int n;
    std::string s, t;

    std::cin >> n;
    std::cin >> s;
    std::cin >> t;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if (s == t)
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