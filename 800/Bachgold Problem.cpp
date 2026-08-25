#include <iostream>
#include <vector>

int main() {
  int n;
  std::vector<int> res;

  std::cin >> n;

  if (n == 2 || n == 3) {

    std::cout << 1 << "\n";
    std::cout << n << "\n";

    return 0;
  }

  for (int i = 0; i < n / 2 - 1; i++) {
    res.push_back(2);
  }

  res.push_back(n - 2 * (n / 2 - 1));

  std::cout << res.size() << "\n";

  for (int i = 0; i < res.size(); i++) {
    std::cout << res[i] << " ";
  }

  std::cout << "\n";

  return 0;
}