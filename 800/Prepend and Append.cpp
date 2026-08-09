#include <iostream>
#include <deque>
#include <string>
#include <vector>

int main()
{
  int t;
  std::vector<int> v;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n, res = 0;
    std::string s;
    std::deque<char> d;

    std::cin >> n;
    std::cin >> s;

    for (int j = 0; j < n; j++)
    {
      d.push_back(s[j]);
    }

    while (true)
    {
      if (d.empty())
      {
        break;
      }

      if (d.front() != d.back())
      {
        d.pop_back();

        if (!d.empty())
        {
          d.pop_front();
        }
      }
      else
      {
        res = d.size();
        break;
      }
    }

    v.push_back(res);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << v[i] << "\n";
  }

  return 0;
}