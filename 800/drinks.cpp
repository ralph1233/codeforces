#include <iostream>

int main()
{
  int n;
  float sum = 0;

  std::cin >> n;

  for (int i = 0; i < n; i++)
  {
    float p;

    std::cin >> p;

    sum += p / 100;
  }

  std::cout << sum / n * 100;

  return 0;
}
