#include <iostream>
#include <string>
#include <cctype>

int main()
{
  std::string a, b;

  std::cin >> a;
  std::cin >> b;

  bool is_equal = true;

  for (int i = 0; i < a.length(); i++)
  {
    int lower_a = int(std::tolower(a[i]));
    int lower_b = int(std::tolower(b[i]));

    if (lower_a < lower_b)
    {
      std::cout << -1 << std::endl;
      is_equal = false;
      break;
    }
    else if (lower_a > lower_b)
    {
      std::cout << 1 << std::endl;
      is_equal = false;
      break;
    }
  }

  if (is_equal)
  {
    std::cout << 0 << std::endl;
  }

  return 0;
}