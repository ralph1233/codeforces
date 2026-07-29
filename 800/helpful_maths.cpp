#include <iostream>
#include <vector>
#include <string>

int main()
{
  std::vector<char> ones, twos, threes;
  std::string equation, result = "";

  std::cin >> equation;

  for (const char c : equation)
  {
    if (c == '1')
    {
      ones.push_back(c);
    }

    if (c == '2')
    {
      twos.push_back(c);
    }

    if (c == '3')
    {
      threes.push_back(c);
    }
  }

  for (int i = 0; i < ones.size(); i++)
  {
    if (i == ones.size() - 1)
    {
      if (twos.size() == 0 && threes.size() == 0)
      {
        result += "1";
      }
      else
      {
        result += "1+";
      }
    }
    else
    {
      result += "1+";
    }
  }

  for (int i = 0; i < twos.size(); i++)
  {
    if (i == twos.size() - 1)
    {
      if (threes.size() == 0)
      {
        result += "2";
      }
      else
      {
        result += "2+";
      }
    }
    else
    {
      result += "2+";
    }
  }

  for (int i = 0; i < threes.size(); i++)
  {
    if (i == threes.size() - 1)
    {
      result += "3";
    }
    else
    {
      result += "3+";
    }
  }

  std::cout << result << std::endl;

  return 0;
}