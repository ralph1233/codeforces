#include <iostream>
#include <string>
#include <vector>
#include <map>

int main()
{
  int t;
  std::vector<int> res;
  std::string levels = "ABCDEFG";

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n, m, sum = 0;
    std::string s;
    std::map<char, int> _map;

    std::cin >> n;
    std::cin >> m;
    std::cin >> s;

    for (int j = 0; j < levels.size(); j++)
    {
      _map[levels[j]] = 0;
    }

    for (int j = 0; j < n; j++)
    {
      _map[s[j]]++;
    }

    for (const auto &[key, value] : _map)
    {
      if (value < m)
      {
        sum += m - value;
      }
    }

    res.push_back(sum);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}