#include <iostream>
#include <string>
#include <vector>

int main()
{
  int t;
  std::vector<std::vector<std::string>> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    std::string a, b;
    std::vector<std::string> v;

    std::cin >> a;
    std::cin >> b;

    char a1 = a[0];
    char b1 = b[0];

    a[0] = b1;
    b[0] = a1;

    v.push_back(a);
    v.push_back(b);

    res.push_back(v);
  }

  for (int i = 0; i < t; i++)
  {
    for (int j = 0; j < res[i].size(); j++)
    {
      std::cout << res[i][j] << " ";
    }
    std::cout << "\n";
  }

  return 0;
}