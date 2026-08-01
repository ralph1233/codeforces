#include <iostream>
#include <string>

int main()
{

  int n, res = 1;
  std::string prev;

  std::cin >> n;
  std::cin >> prev;

  for (int i = 1; i < n; i++)
  {
    std::string curr;
    std::cin >> curr;

    if (prev[1] == curr[0])
    {
      res++;
    }

    prev = curr;
  }

  std::cout << res << '\n';

  return 0;
}