#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
  int n, sum = 0, count = 0, sum1 = 0;
  std::vector<int> nbs;

  std::cin >> n;

  for (int i = 0; i < n; i++)
  {
    int nb;

    std::cin >> nb;

    sum += nb;
    nbs.push_back(nb);
  }

  sort(nbs.begin(), nbs.end());

  for (int i = n - 1; i >= 0; i--)
  {
    sum1 += nbs[i];
    count++;

    if (sum1 > sum / 2)
    {
      break;
    }
  }

  std::cout << count << "\n";

  return 0;
}