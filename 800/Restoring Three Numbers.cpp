#include <iostream>
#include <vector>

int main()
{

  int x1, x2, x3, x4, max;
  std::vector<int> v;

  std::cin >> x1;

  max = x1;

  std::cin >> x2;

  if (x2 > max)
  {
    max = x2;
  }

  std::cin >> x3;

  if (x3 > max)
  {
    max = x3;
  }

  std::cin >> x4;

  if (x4 > max)
  {
    max = x4;
  }

  v.push_back(x1);
  v.push_back(x2);
  v.push_back(x3);
  v.push_back(x4);

  for (int i = 0; i < 4; i++)
  {
    if (v[i] == max)
    {
      continue;
    }

    std::cout << max - v[i] << " ";
  }

  std::cout << "\n";

  return 0;
}