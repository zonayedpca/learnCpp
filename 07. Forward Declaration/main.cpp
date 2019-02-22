#include <iostream>

int aFunc(int x, int y);

int main() {
  std::cout << "Sum: " << aFunc(10, 20) << '\n';
  return 0;
}

int aFunc(int x, int y) {
  return x + y;
}
