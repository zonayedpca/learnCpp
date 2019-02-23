#include <iostream>
#include "constants.h"

int main() {
  std::cout << "Printing out Constants" << '\n';
  std::cout << "PI: " << constants::pi << '\n';
  std::cout << "Avogadro: " << constants::avogadro << '\n';
  std::cout << "Gravity: " << constants::gravity << '\n';
  return 0;
}
