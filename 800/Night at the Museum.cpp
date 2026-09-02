#include <iostream>
#include <string>
#include <map>
#include <cmath>

int main()
{
  int sum = 0;
  std::map<char, int> m;
  char current_char = 'a';
  std::string s, alphabet = "abcdefghijklmnopqrstuvwxyz";

  for (int i = 1; i <= 26; i++)
  {
    m[alphabet[i - 1]] = i;
  }

  std::cin >> s;

  for (int i = 0; i < s.size(); i++)
  {
    int first_index = m[current_char];
    int second_index = m[s[i]];
    int diff = abs(first_index - second_index);
    current_char = s[i];

    if (diff > 13)
    {
      sum += 26 - diff;
    }
    else
    {
      sum += diff;
    }
  }

  std::cout << sum << '\n';

  return 0;
}