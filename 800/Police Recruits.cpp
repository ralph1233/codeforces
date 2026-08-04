#include <iostream>
#include <queue>

int main()
{

  int n, res = 0;
  std::queue<int> q;

  std::cin >> n;

  for (int i = 0; i < n; i++)
  {
    int nb;

    std::cin >> nb;

    if (nb == -1)
    {
      if (q.empty())
      {
        res++;
      }
      else
      {
        q.pop();
      }
    }
    else
    {
      while (nb--)
      {
        q.push(1);
      }
    }
  }

  std::cout << res << "\n";

  return 0;
}