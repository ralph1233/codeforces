#include <iostream>

int main()
{
  int n;

  std::cin >> n;

  bool is_easy = true;

  for (int i = 0; i < n; i++)
  {
    int o;

    std::cin >> o;

    if (o == 1)
    {
      is_easy = false;
    }
  }

  if (is_easy)
  {
    std::cout << "EASY\n";
  }
  else
  {
    std::cout << "HARD\n";
  }

  return 0;
}