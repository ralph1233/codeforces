#include <iostream>
#include <string>
#include <vector>

int main()
{
  int t;
  std::vector<int> res;
  std::string text = "codeforces";

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int count = 0;

    std::string s;

    std::cin >> s;

    for (int j = 0; j < text.length(); j++)
    {
      if (s[j] != text[j])
      {
        count++;
      }
    }

    res.push_back(count);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}