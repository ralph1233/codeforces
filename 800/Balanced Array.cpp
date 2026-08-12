#include <iostream>
#include <string>
#include <vector>

void build_vector(long long int n, std::vector<long long int> &nbs) {
  long long int even = 2;
  long long int odd = 1;
  long long int sum_even = 0;
  long long int sum_odd = 0;

  for (int i = 0; i < n / 2; i++) {
    sum_even += even;
    nbs.push_back(even);
    even += 2;
  }

  for (int i = n / 2; i < n - 1; i++) {
    sum_odd += odd;
    nbs.push_back(odd);
    odd += 2;
  }

  nbs.push_back(sum_even - sum_odd);
}

int main() {
  int t, u = 0;
  std::vector<std::string> res;
  std::vector<std::vector<long long int>> nbs;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    long long int nb;

    std::cin >> nb;

    if ((nb / 2) % 2 == 0) {
      res.push_back("YES");
      std::vector<long long int> tmp;
      build_vector(nb, tmp);
      nbs.push_back(tmp);
    } else {
      res.push_back("NO");
    }
  }

  for (int i = 0; i < res.size(); i++) {
    if (res[i] == "YES") {
      std::cout << res[i] << "\n";

      for (int j = 0; j < nbs[u].size(); j++) {
        std::cout << nbs[u][j] << " ";
      }

      std::cout << "\n";

      u++;
    } else {
      std::cout << res[i] << "\n";
    }
  }

  return 0;
}