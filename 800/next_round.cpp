#include <iostream>

int main()
{
  int n, k;
  int res = 0;
  int *scores;

  std::cin >> n;
  std::cin >> k;

  scores = new int[n];

  int i;

  for (i = 0; i < n; i++)
  {
    std::cin >> scores[i];
  }

  i = 0;

  while (i < n)
  {

    if (scores[i] >= scores[k - 1])
    {
      if (scores[i] > 0)
      {
        res++;
      }
    }

    i++;
  }

  std::cout << res << std::endl;

  delete[] scores;

  return 0;
}