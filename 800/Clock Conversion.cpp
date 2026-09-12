#include <iostream>
#include <string>
#include <vector>

int main()
{
  int t;
  std::vector<std::string> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    std::string s, h = "", new_s = "";

    std::cin >> s;

    h += s[0];
    h += s[1];

    int hours = std::stoi(h);

    if (hours == 0)
    {
      new_s += "12:";
      new_s += s[3];
      new_s += s[4];
      new_s += " AM";
      res.push_back(new_s);

      continue;
    }

    if (hours == 12)
    {
      new_s += "12:";
      new_s += s[3];
      new_s += s[4];
      new_s += " PM";
      res.push_back(new_s);

      continue;
    }

    if (hours < 12)
    {
      new_s += h;
      new_s += ":";
      new_s += s[3];
      new_s += s[4];
      new_s += " AM";

      res.push_back(new_s);
    }
    else
    {
      if (hours - 12 < 10)
      {
        new_s += "0";
      }
      new_s += std::to_string(hours - 12);
      new_s += ":";
      new_s += s[3];
      new_s += s[4];
      new_s += " PM";

      res.push_back(new_s);
    }
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}