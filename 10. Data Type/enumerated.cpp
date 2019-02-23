#include <iostream>

enum Color {
  COLOR_WHITE,
  COLOR_BLACK,
  COLOR_BLUE,
  COLOR_GREEN,
  COLOR_GREY
};

int main() {
  std::cout << "Enumerated Types" << '\n';
  std::cout << "Color White: " << COLOR_WHITE << '\n';
  std::cout << "Color Green: " << COLOR_GREEN << '\n';
  Color blue = COLOR_BLUE;
  std::cout << "Color Blue: " << blue << '\n';
  int inputValue;
  std::cout << "Enter an integer: ";
  std::cin >> inputValue;
  Color grey = static_cast<Color>(inputValue);
  std::cout << "Color Grey: " << grey << '\n';
  return 0;
}
