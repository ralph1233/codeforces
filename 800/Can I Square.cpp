#include <iostream>
#include <vector>
#include <string>
#include <cmath>

int main()
{
  int t;
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    long long int n, sum = 0;

    std::cin >> n;

    for (int j = 0; j < n; j++)
    {
      long long int nb;

      std::cin >> nb;

      sum += nb;
    }

    long long int sq_rt = sqrt(sum);

    if (sq_rt * sq_rt == sum)
    {
      res.push_back("YES");
    }
    else
    {
      res.push_back("NO");
    }
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}