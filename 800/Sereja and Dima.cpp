#include <iostream>
#include <deque>

int main()
{
  int n, sereja = 0, dima = 0, flip = 0;

  std::deque<int> d;

  std::cin >> n;

  for (int i = 0; i < n; i++)
  {
    int nb;

    std::cin >> nb;

    d.push_back(nb);
  }

  while (!d.empty())
  {
    if (flip == 0)
    {
      if (d.front() > d.back())
      {
        sereja += d.front();
        d.pop_front();
      }
      else
      {
        sereja += d.back();
        d.pop_back();
      }

      flip = 1;
    }
    else
    {

      if (d.front() > d.back())
      {
        dima += d.front();
        d.pop_front();
      }
      else
      {
        dima += d.back();
        d.pop_back();
      }

      flip = 0;
    }
  }

  std::cout << sereja << " " << dima << '\n';

  return 0;
}