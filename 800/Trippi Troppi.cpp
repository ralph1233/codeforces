#include <iostream>
#include <vector>
#include <string>

int main()
{
  int t;
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    std::string s1, s2, s3, result = "";

    std::cin >> s1;
    std::cin >> s2;
    std::cin >> s3;

    result += s1[0];
    result += s2[0];
    result += s3[0];

    res.push_back(result);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}