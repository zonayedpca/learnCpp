#include <iostream>

int main() {
  #ifndef CONDITION
  #define CONDITION
  #endif

  #ifdef CONDITION
  std::cout << "CONDITION is defined" << '\n';
  #endif

  #ifndef ANOTHER_CONDITION
  std::cout << "ANOTHER_CONDITION is not defined" << '\n';
  #endif
  return 0;
}
