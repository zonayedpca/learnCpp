#include <iostream>

void willChangeTheValue(auto *x) {
  std::cout << "Start of the Function" << '\n';
  std::cout << "Passed address: " << x << " and contained value: " << *x << '\n';
  *x = 20;
  std::cout << "x is now: " << x  << " and the value is: " << *x << '\n';
  std::cout << "End of the Function" << '\n';
}

int main() {
  std::cout << "Pass by value" << '\n';
  int a = 10;
  std::cout << "a is now: " << a << '\n';
  willChangeTheValue(&a);
  std::cout << "a afterwards: " << a << '\n';
  return 0;
}
