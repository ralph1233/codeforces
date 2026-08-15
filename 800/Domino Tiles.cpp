#include <iostream>
#include <vector>
#include <string>
#include <cmath>

void generate_even_strings(int n, std::string &s1, std::string &s2, std::string &s3, std::string &s4)
{
  for (int i = 0; i < n / 2; i++)
  {
    if (i % 2 == 0)
    {
      s1 += "00";
    }
    else
    {
      s1 += "11";
    }
  }

  for (int i = 0; i < n / 2; i++)
  {
    if (i % 2 == 0)
    {
      s2 += "01";
    }
    else
    {
      s2 += "10";
    }
  }
  for (int i = 0; i < n / 2; i++)
  {
    if (i % 2 == 0)
    {
      s3 += "10";
    }
    else
    {
      s3 += "01";
    }
  }
  for (int i = 0; i < n / 2; i++)
  {
    if (i % 2 == 0)
    {
      s4 += "11";
    }
    else
    {
      s4 += "00";
    }
  }
}

void generate_odd_strings(int n, std::string &s1, std::string &s2, std::string &s3, std::string &s4)
{
  for (int i = 0; i < n / 2; i++)
  {
    if (i % 2 == 0)
    {
      s1 += "01";
    }
    else
    {
      s1 += "10";
    }
  }

  for (int i = 0; i < n / 2; i++)
  {
    if (i % 2 == 0)
    {
      s2 += "11";
    }
    else
    {
      s2 += "00";
    }
  }

  for (int i = 0; i < n / 2; i++)
  {
    if (i % 2 == 0)
    {
      s3 += "00";
    }
    else
    {
      s3 += "11";
    }
  }

  for (int i = 0; i < n / 2; i++)
  {
    if (i % 2 == 0)
    {
      s4 += "10";
    }
    else
    {
      s4 += "01";
    }
  }
}

bool compare(std::string s, std::string valid)
{
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] != '?')
    {
      if (s[i] != valid[i])
      {
        return false;
      }
    }
  }

  return true;
}

int main()
{
  int t;
  std::vector<int> res;

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n, count = 0;
    std::string s, s1, s2, s3, s4;
    std::vector<std::string> valid_strings;

    std::cin >> n;
    std::cin >> s;

    if (n % 2 == 0)
    {
      s1 = "";
      s2 = "";
      s3 = "";
      s3 = "";
      generate_even_strings(n, s1, s2, s3, s4);
    }
    else
    {
      s1 = "0";
      s2 = "0";
      s3 = "1";
      s4 = "1";
      generate_odd_strings(n, s1, s2, s3, s4);
    }

    valid_strings.push_back(s1);
    valid_strings.push_back(s2);
    valid_strings.push_back(s3);
    valid_strings.push_back(s4);

    for (int j = 0; j < 4; j++)
    {
      if (compare(s, valid_strings[j]))
      {
        count++;
      }
    }

    res.push_back(count);
  }

  for (int i = 0; i < res.size(); i++)
  {
    std::cout << res[i] % 998244353 << "\n";
  }

  return 0;
}
