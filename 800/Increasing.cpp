#include <iostream>
#include <vector>
#include <string>
#include <set>

int main()
{
  int t;
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n;
    std::vector<int> nbs;
    std::set<int> s;

    std::cin >> n;

    for (int j = 0; j < n; j++)
    {
      int nb;

      std::cin >> nb;

      nbs.push_back(nb);
      s.insert(nb);
    }

    if (s.size() == nbs.size())
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
}