#include <iostream>

int main()
{
  int y, w, max;

  std::cin >> y;

  max = y;

  std::cin >> w;

  if (w > max)
  {
    max = w;
  }

  int numerator = 6 - max + 1;
  int denominator = 6;

  while (denominator % numerator == 0 && numerator != 1)
  {
    denominator /= numerator;
    numerator /= numerator;
  }

  while (denominator % 2 == 0 && numerator % 2 == 0)
  {
    denominator /= 2;
    numerator /= 2;
  }

  std::cout << numerator << "/" << denominator << "\n";

  return 0;
}