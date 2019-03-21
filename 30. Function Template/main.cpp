#include <iostream>

template <typename T>
T max(T a, T b) {
  return (a > b) ? a : b;
}

int main() {
  int maxInt = max(180, 16);
  std::cout << "maxInt: " << maxInt << '\n';
  double maxDouble = max(14.23, 323.55);
  std::cout << "maxDouble: " << maxDouble << '\n';
  char maxChar = max('a', 'A');
  std::cout << "maxChar: " << maxChar << '\n';
  return 0;
}
