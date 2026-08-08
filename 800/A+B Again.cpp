#include <iostream>
#include <vector>

int main()
{

  int t;
  std::vector<int> v;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n;

    std::cin >> n;

    v.push_back(n % 10 + (int)(n / 10));
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << v[i] << "\n";
  }

  return 0;
}