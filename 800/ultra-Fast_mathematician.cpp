#include <iostream>
#include <string>

int main()
{

  std::string a, b;

  std::cin >> a;
  std::cin >> b;

  for (int i = 0; i < a.length(); i++)
  {

    int res = (a[i] - '0') ^ (b[i] - '0');

    std::cout << res;
  }

  std::cout << "\n";

  return 0;
}