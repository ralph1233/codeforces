#include <iostream>
#include <string>

std::string replace(std::string s)
{
  if (s.length() <= 10)
  {
    return s + "\n";
  }

  return s[0] + std::to_string(s.length() - 2) + s[s.length() - 1] + "\n";
}

int main()
{
  int n;
  std::string result = "";

  std::cin >> n;

  for (int i = 0; i < n; i++)
  {
    std::string s;
    std::cin >> s;
    result += replace(s);
  }

  std::cout << result;

  return 0;
}