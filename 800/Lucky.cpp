#include <iostream>
#include <string>
#include <vector>

int main()
{

  int t;
  std::vector<std::string> v;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    std::string s;

    std::cin >> s;

    int length = s.length();

    int nb1 = s[0] - '0';
    int nb2 = s[1] - '0';
    int nb3 = s[2] - '0';
    int nb4 = s[length - 1] - '0';
    int nb5 = s[length - 2] - '0';
    int nb6 = s[length - 3] - '0';

    int sum1 = nb1 + nb2 + nb3;
    int sum2 = nb4 + nb5 + nb6;

    if (sum1 == sum2)
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