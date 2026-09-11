#include <iostream>
#include <vector>

//

int main() {
  int t;
  std::vector<std::vector<int>> res;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    int n;
    std::vector<int> nbs;

    std::cin >> n;

    std::vector<int> new_nbs(n);

    for (int j = 0; j < n; j++) {
      int nb;

      std::cin >> nb;

      nbs.push_back(nb);
    }

    int left = 0;
    int right = n - 1;

    for (int j = 0; j < n; j++) {
      if (j % 2 == 0) {
        new_nbs[j] = nbs[left];
        left++;
      } else {
        new_nbs[j] = nbs[right];
        right--;
      }
    }

    res.push_back(new_nbs);
  }

  for (int i = 0; i < t; i++) {

    for (int j = 0; j < res[i].size(); j++) {
      std::cout << res[i][j] << " ";
    }

    std::cout << "\n";
  }

  return 0;
}