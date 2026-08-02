#include <iostream>
#include <string>

int main()
{
  int n, res = 0;
  std::string w;

  std::cin >> n;

  for (int i = 0; i < n; i++)
  {
    std::cin >> w;

    if (w == "Tetrahedron")
    {
      res += 4;
    }

    if (w == "Cube")
    {
      res += 6;
    }

    if (w == "Octahedron")
    {
      res += 8;
    }

    if (w == "Dodecahedron")
    {
      res += 12;
    }

    if (w == "Icosahedron")
    {
      res += 20;
    }
  }

  std::cout << res << "\n";

  return 0;
}