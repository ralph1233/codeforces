#include <iostream>
#include <string>
#include <queue>

int main()
{

  std::string s, res = "";
  std::queue<char> q;

  std::cin >> s;

  for (int i = 0; i < s.length(); i++)
  {
    q.push(s[i]);
  }

  while (!q.empty())
  {
    if (q.front() == '.')
    {
      res += "0";
      q.pop();
    }
    else
    {
      q.pop();

      if (q.front() == '.')
      {
        res += "1";
      }
      else
      {
        res += "2";
      }
      q.pop();
    }
  }

  std::cout << res << "\n";

  return 0;
}