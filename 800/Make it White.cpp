#include <iostream>
#include <vector>
#include <string>

int main()
{
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n, first_index = 0, last_index = 0;
    std::string s;

    std::cin >> n;
    std::cin >> s;

    for (int j = 0; j < n; j++)
    {
      if (s[j] == 'B')
      {
        first_index = j;
        break;
      }
    }

    for (int j = n - 1; j >= 0; j--)
    {
      if (s[j] == 'B')
      {
        last_index = j;
        break;
      }
    }

    res.push_back((last_index - first_index) + 1);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}