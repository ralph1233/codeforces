#include <iostream>
#include <vector>

int main()
{
  long long int n, k;
  long long int first_odd_position = 1, first_even_position;

  std::cin >> n;
  std::cin >> k;

  if (n % 2 == 0)
  {
    first_even_position = n / 2 + 1;
  }
  else
  {
    first_even_position = n / 2 + 2;
  }

  if (k < first_even_position)
  {
    std::cout << 1 + (k - first_odd_position) * 2 << "\n";
  }
  else
  {
    std::cout << 2 + (k - first_even_position) * 2 << "\n";
  }

  return 0;
}
