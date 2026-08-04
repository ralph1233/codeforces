#include <iostream>
#include <string>

bool is_permute(std::string guest, std::string host, std::string letters) {
  if (guest.length() + host.length() != letters.length()) {
    return false;
  }

  for (int i = 0; i < letters.length(); i++) {
    int occ = 0;
    int count = 0;

    for (int j = 0; j < guest.length(); j++) {
      if (guest[j] == letters[i]) {
        count++;
      }
    }

    for (int k = 0; k < host.length(); k++) {
      if (host[k] == letters[i]) {
        count++;
      }
    }

    for (int u = 0; u < letters.length(); u++) {
      if (letters[i] == letters[u]) {
        occ++;
      }
    }

    if (occ != count) {
      return false;
    }
  }

  return true;
}

int main() {
  std::string guest;
  std::string host;
  std::string letters;

  std::cin >> guest;
  std::cin >> host;
  std::cin >> letters;

  if (is_permute(guest, host, letters)) {
    std::cout << "YES\n";
  } else {
    std::cout << "NO\n";
  }

  return 0;
}