#include <iostream>

int main() {
  int rounds, mishka = 0, chris = 0;

  std::cin >> rounds;

  for (int i = 0; i < rounds; i++) {
    int m, c;

    std::cin >> m;
    std::cin >> c;

    if (m > c) {
      mishka++;
    } else if (c > m) {
      chris++;
    }
  }

  if (mishka > chris) {
    std::cout << "Mishka\n";
  } else if (chris > mishka) {
    std::cout << "Chris\n";
  } else {
    std::cout << "Friendship is magic!^^\n";
  }

  return 0;
}