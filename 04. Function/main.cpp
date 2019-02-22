#include <iostream>

void printSomething() {
  std::cout << "Callee/Called Function" << '\n';
}

int returnInt() {
  return 62;
}

int main() {
  std::cout << "Caller" << '\n';
  printSomething();
  std::cout << "Return Something: " << returnInt() << '\n';
  std::cout << "Again Return Something: " << returnInt() << '\n';
  std::cout << "Once Again Return Something: " << returnInt() << '\n';
  return 0;
}
