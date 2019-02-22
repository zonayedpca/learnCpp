#include <iostream>

int main() {
  std::cout << "Initialization using Equal Sign" << '\n';
  int e = 10;
  std::cout << "Direct Initialization" << '\n';
  int d(20);
  std::cout << "Unifor Initialization" << '\n';
  int u{30};
  return 0;
}
