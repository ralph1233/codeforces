#include <iostream>
#include <vector>

int main()
{
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n;
    std::vector<int> v;

    std::cin >> n;

    for (int j = 0; j < n; j++)
    {
      int nb;

      std::cin >> nb;

      v.push_back(nb);
    }

    for (int a = 0; a < v.size(); a++)
    {
      int count = 0;

      for (int b = 0; b < v.size(); b++)
      {
        if (v[a] == v[b])
        {
          count++;
        }
      }

      if (count == 1)
      {
        res.push_back(a + 1);
      }
    }
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}