#include <iostream>
#include <vector>

int main()
{
  int t;
  std::vector<int> res;
  std::vector<int> sequence;
  int nb = 1;

  for (int i = 1; i <= 1000;)
  {
    if (nb % 3 == 0 || nb % 10 == 3)
    {
      nb++;
      continue;
    }

    sequence.push_back(nb);
    i++;
    nb++;
  }

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int k;

    std::cin >> k;

    res.push_back(sequence[k - 1]);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}