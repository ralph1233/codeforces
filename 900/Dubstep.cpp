#include <iostream>
#include <string>

int main() {

  int first_index, last_index;
  std::string s;

  std::cin >> s;

  for (int i = 0; i < s.length();) {
    if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
      i += 3;
    } else {
      first_index = i;
      break;
    }
  }

  for (int i = s.length() - 1; i >= 0;) {
    if (s[i] == 'B' && s[i - 1] == 'U' && s[i - 2] == 'W') {
      i -= 3;
    } else {
      last_index = i;
      break;
    }
  }

  for (int i = first_index; i <= last_index;) {
    if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
      i += 3;
      std::cout << " ";
    } else {
      std::cout << s[i];
      i++;
    }
  }

  std::cout << "\n";

  return 0;
}