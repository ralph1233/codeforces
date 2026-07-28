#include <iostream>
#include <cmath>

int main()
{

  int matrix[5][5];
  int index_i, index_j;

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      std::cin >> matrix[i][j];

      if (matrix[i][j] == 1)
      {
        index_i = i;
        index_j = j;
      }
    }
  }

  std::cout << abs(2 - index_i) + abs(2 - index_j) << "\n";

  return 0;
}