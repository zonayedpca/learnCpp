#include <iostream>

int add(int x, int y) {
  return x + y;
}

int (*aFuncP)(int, int) = add;

int main() {
  std::cout << "Early Bidning: " << add(20, 30) << '\n';
  std::cout << "Late Bidning: " << aFuncP(30,70) << '\n';
  return 0;
}
