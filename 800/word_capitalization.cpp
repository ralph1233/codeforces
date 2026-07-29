#include <iostream>
#include <string>

int main()
{

  std::string w;

  std::cin >> w;

  w[0] = std::toupper(w[0]);

  std::cout << w << "\n";

  return 0;
}