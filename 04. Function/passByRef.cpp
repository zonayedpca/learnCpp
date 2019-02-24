#include <iostream>

void willChangeTheValue(auto &x) {
  std::cout << "Start of the Function" << '\n';
  std::cout << "Passed reference: " << x << '\n';
  x = 20;
  std::cout << "x is now: " << x << '\n';
  std::cout << "End of the Function" << '\n';
}

int main() {
  std::cout << "Pass by reference" << '\n';
  int a = 10;
  std::cout << "a is now: " << a << '\n';
  willChangeTheValue(a);
  std::cout << "a afterwards: " << a << '\n';
  return 0;
}
