#include <iostream>

int main() {
  int value = 5;
  int &ref = value;
  std::cout << "Reference Value: " << ref << '\n';
  ref = 10;
  std::cout << "Changed Reference Value: " << ref << '\n';
  return 0;
}
