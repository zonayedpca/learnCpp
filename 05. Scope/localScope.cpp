#include <iostream>

void aFunc(int x) {
  std::cout << "Function paramaters and variables are local scoped" << '\n';
  std::cout << "Paramaters can be accessed here: " << x << '\n';
  int y = 20;
  std::cout << "Variables defined here also can be accessed from here: " << y << '\n';
}

int main() {
  aFunc(10);
  return 0;
}
