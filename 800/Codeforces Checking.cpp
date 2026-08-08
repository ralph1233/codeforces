#include <iostream>
#include <vector>
#include <string>

int main()
{
  int t;
  std::vector<std::string> v;
  std::string text = "codeforces";

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    char c;

    std::cin >> c;

    if (text.find(c) != std::string::npos)
    {
      v.push_back("YES");
    }
    else
    {
      v.push_back("NO");
    }
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << v[i] << "\n";
  }

  return 0;
}