#include <iostream>
#include <vector>
#include <queue>

int main()
{
  int n, count1 = 0, count2 = 0, count3 = 0;
  std::vector<std::vector<int>> res;
  std::vector<int> nbs;
  std::queue<int> q1;
  std::queue<int> q2;
  std::queue<int> q3;

  std::cin >> n;

  for (int i = 0; i < n; i++)
  {
    int nb;

    std::cin >> nb;

    if (nb == 1)
    {
      count1++;
      q1.push(i + 1);
    }

    if (nb == 2)
    {
      count2++;
      q2.push(i + 1);
    }

    if (nb == 3)
    {
      count3++;
      q3.push(i + 1);
    }

    nbs.push_back(nb);
  }

  if (count1 == 0 || count2 == 0 || count3 == 0)
  {
    std::cout << 0 << "\n";
  }
  else
  {
    int min = count1;

    if (min > count2)
    {
      min = count2;
    }

    if (min > count3)
    {
      min = count3;
    }

    for (int i = 0; i < min; i++)
    {
      std::vector<int> v;

      v.push_back(q1.front());
      v.push_back(q2.front());
      v.push_back(q3.front());

      q1.pop();
      q2.pop();
      q3.pop();

      res.push_back(v);
    }

    std::cout << min << "\n";

    for (int i = 0; i < min; i++)
    {
      for (int j = 0; j < res[i].size(); j++)
      {
        std::cout << res[i][j] << " ";
      }
      std::cout << "\n";
    }
  }

  return 0;
}