#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
  int t;
  std::vector<int> res;
  std::string alphabets = "abcdefghijklmnopqrstuvwxyz";

  std::cin >> t;

  for (int i = 0; i < t; i++)
  {
    int n;
    std::string s;

    std::cin >> n;
    std::cin >> s;

    sort(s.begin(), s.end());

    auto it = find(alphabets.begin(), alphabets.end(), s[s.length() - 1]);

    res.push_back(distance(alphabets.begin(), it) + 1);
  }

  for (int i = 0; i < t; i++)
  {
    std::cout << res[i] << "\n";
  }

  return 0;
}