#include <iostream>
#include <vector>
#include <set>
#include <string>

int main()
{
  int t;
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n;
    std::set<int> s;
    std::vector<int> v;

    std::cin >> n;

    for (int j = 0; j < n; j++)
    {
      int nb;

      std::cin >> nb;

      v.push_back(nb);
      s.insert(nb);
    }

    if (n <= 2)
    {
      res.push_back("YES");
    }
    else
    {
      if (s.size() > 2)
      {
        res.push_back("NO");
      }
      else if (s.size() == 1)
      {
        res.push_back("YES");
      }
      else
      {
        std::set<int>::iterator itr = s.begin();

        int occ = 0;

        for (int j = 0; j < n; j++)
        {
          if (v[j] == *itr)
          {
            occ++;
          }
        }

        if (n % 2 == 0)
        {
          if (occ == n / 2)
          {
            res.push_back("YES");
          }
          else
          {
            res.push_back("NO");
          }
        }
        else
        {
          if (occ == n / 2 || occ == n / 2 + 1)
          {
            res.push_back("YES");
          }
          else
          {
            res.push_back("NO");
          }
        }
      }
    }
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}
