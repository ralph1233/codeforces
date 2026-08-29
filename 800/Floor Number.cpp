#include <iostream>
#include <vector>

int main()
{
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n, x;

    std::cin >> n;
    std::cin >> x;

    if (n == 1 || n == 2)
    {
      res.push_back(1);
    }
    else
    {
      int apartment = 3;
      int floor = 2;
      bool found = false;

      while (true)
      {
        if (apartment == n)
        {
          res.push_back(floor);
          break;
        }

        for (int j = 0; j < x; j++)
        {

          if (apartment == n)
          {
            found = true;
            break;
          }

          apartment++;
        }

        if (found)
        {
          res.push_back(floor);
          break;
        }

        if (apartment == n)
        {
          floor++;
          res.push_back(floor);
          break;
        }

        floor++;
      }
    }
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}