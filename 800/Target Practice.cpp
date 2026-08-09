#include <iostream>
#include <string>
#include <vector>

int main()
{
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int sum = 0;
    std::vector<std::vector<char>> matrix;

    for (int u = 0; u < 10; u++)
    {
      std::vector<char> row;

      for (int k = 0; k < 10; k++)
      {
        char c;

        std::cin >> c;

        row.push_back(c);
      }

      matrix.push_back(row);
    }

    for (int u = 0; u < matrix.size(); u++)
    {
      for (int k = 0; k < matrix[u].size(); k++)
      {
        if (matrix[u][k] == 'X')
        {
          if (u == 0 || u == 9 || k == 0 || k == 9)
          {
            sum++;
            continue;
          }

          if (u == 1 || u == 8 || k == 1 || k == 8)
          {
            sum += 2;
            continue;
          }

          if (u == 2 || u == 7 || k == 2 || k == 7)
          {
            sum += 3;
            continue;
          }

          if (u == 3 || u == 6 || k == 3 || k == 6)
          {
            sum += 4;
            continue;
          }

          if (u == 4 || u == 5 || k == 4 || k == 5)
          {
            sum += 5;
          }
        }
      }
    }

    res.push_back(sum);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}