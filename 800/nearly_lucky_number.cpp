#include <iostream>

bool is_lucky(int n)
{
  if (n == 4 || n == 7)
  {
    return true;
  }

  return false;
}

bool is_result_lucky(int count)
{
  if (count == 0)
  {
    return false;
  }

  while (count != 0)
  {
    int digit = count % 10;
    count = count / 10;

    if (!is_lucky(digit))
    {
      return false;
    }
  }

  return true;
}

int main()
{

  long long n, count = 0;

  std::cin >> n;

  while (n != 0)
  {
    int digit = n % 10;
    n = n / 10;
    if (is_lucky(digit))
    {
      count++;
    }
  }

  if (is_result_lucky(count))
  {
    std::cout << "YES\n";
  }
  else
  {
    std::cout << "NO\n";
  }

  return 0;
}