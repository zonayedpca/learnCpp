#include <iostream>

void willNotChangeTheValue(int x) {
  std::cout << "Start of the Function" << '\n';
  std::cout << "Passed value: " << x << '\n';
  x = 20;
  std::cout << "x is now: " << x << '\n';
  std::cout << "End of the Function" << '\n';
}

int main() {
  std::cout << "Pass by value" << '\n';
  int a = 10;
  std::cout << "a is now: " << a << '\n';
  willNotChangeTheValue(a);
  std::cout << "a afterwards: " << a << '\n';
  return 0;
}
