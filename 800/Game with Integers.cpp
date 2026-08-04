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

    v.push_back(n);
  }

  for (int i = 0; i < v.size(); i++)
  {
    if ((v[i] + 1) % 3 == 0 || (v[i] - 1) % 3 == 0)
    {
      std::cout << "First\n";
    }
    else
    {
      std::cout << "Second\n";
    }
  }

  return 0;
}