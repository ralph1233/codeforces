#include <iostream>
#include <vector>

int count_digits(int n)
{
  int count = 0;

  while (n != 0)
  {
    count++;

    n /= 10;
  }

  return count;
}

int main()
{

  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n, count = 0;

    std::cin >> n;

    for (int j = 1; j <= n % 10; j++)
    {
      bool is_equal_n = false;
      int tmp = j;

      while (tmp < 10000)
      {
        if (tmp == n)
        {
          count += count_digits(tmp);
          is_equal_n = true;
          break;
        }

        count += count_digits(tmp);

        tmp *= 10;
        tmp += j;
      }

      if (is_equal_n)
      {
        break;
      }
    }

    res.push_back(count);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}