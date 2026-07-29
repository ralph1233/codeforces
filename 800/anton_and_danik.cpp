#include <iostream>
#include <string>

int main()
{
  int n, A = 0, D = 0;
  std::string s;

  std::cin >> n;
  std::cin >> s;

  for (int i = 0; i < n; i++)
  {
    if (s[i] == 'A')
    {
      A++;
    }
    else
    {
      D++;
    }
  }

  if (A > D)
  {
    std::cout << "Anton\n";
  }
  else if (D > A)
  {
    std::cout << "Danik\n";
  }
  else
  {
    std::cout << "Friendship\n";
  }
}