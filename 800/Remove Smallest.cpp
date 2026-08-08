#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool is_possible(std::vector<int> v)
{
  for (int i = 1; i < v.size(); i++)
  {
    if (abs(v[i] - v[i - 1]) > 1)
    {
      return false;
    }
  }

  return true;
}

int main()
{

  int t;
  std::vector<std::string> v_res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {

    int n;
    std::vector<int> v;

    std::cin >> n;

    for (int j = 0; j < n; j++)
    {
      int nb;

      std::cin >> nb;

      v.push_back(nb);
    }

    std::sort(v.begin(), v.end());

    if (n == 1)
    {
      v_res.push_back("YES");
    }
    else
    {
      if (is_possible(v))
      {
        v_res.push_back("YES");
      }
      else
      {
        v_res.push_back("NO");
      }
    }
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << v_res[i] << "\n";
  }

  return 0;
}
