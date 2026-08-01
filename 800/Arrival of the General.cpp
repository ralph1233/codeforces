#include <iostream>
#include <vector>

int main()
{
  int n, res = 0, min_index, max_index, min, max;
  std::vector<int> v;

  std::cin >> n;

  for (int i = 0; i < n; i++)
  {
    int nb;

    std::cin >> nb;

    v.push_back(nb);

    if (i == 0)
    {
      max = v[i];
      min = v[i];
      min_index = i;
      max_index = i;
    }

    if (v[i] > max)
    {
      max = v[i];
      max_index = i;
    }

    if (v[i] <= min)
    {
      min = v[i];
      min_index = i;
    }
  }

  int flip = 0;

  while (max_index != 0 || min_index != v.size() - 1)
  {
    if (min_index + 1 == max_index)
    {
      max_index--;
      min_index++;
      res++;

      if (min_index == v.size() - 1)
      {
        flip = 1;
      }
      else if (max_index == 0)
      {
        flip = 0;
      }
    }
    else
    {
      if (max_index != 0)
      {
        if (flip == 1)
        {
          max_index--;
          res++;
          flip = 0;
          continue;
        }
      }
      else
      {
        flip = 0;
      }

      if (min_index != v.size() - 1)
      {
        if (flip == 0)
        {
          min_index++;
          res++;
          flip = 1;
        }
      }
      else
      {
        flip = 1;
      }
    }
  }

  std::cout << res << '\n';

  return 0;
}