#include <iostream>

void dontReturn(int x, int y) {
  std::cout << "First: " << x << " and Second: " << y << '\n';
}

int returnSomething(int x, int y) {
  return x + y;
}

int anotherFunc(int sub, int sum) {
  return sum - sub;
}


int main() {
  dontReturn(10, 62);
  std::cout << "Return Something: " << returnSomething(10, 62) << '\n';
  std::cout << "Another Function as Argument: " << anotherFunc(22, returnSomething(10, 62)) << '\n';
  return 0;
}
