#include <iostream>

int main()
{
  int n, max, people_train;

  std::cin >> n;

  for (int i = 0; i < n; i++)
  {
    int a, b;

    std::cin >> a;
    std::cin >> b;

    if (i == 0)
    {
      max = b;
      people_train = b;
      continue;
    }

    people_train = (people_train - a) + b;

    if (people_train > max)
    {
      max = people_train;
    }
  }

  std::cout << max << '\n';

  return 0;
}