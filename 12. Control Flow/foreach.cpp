#include <iostream>

int main() {
  int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
  for(int one: arr) {
    std::cout << "Element: " << one << '\n';
  }
  std::cout << "auto Keyword" << '\n';
  for(auto one: arr) {
    std::cout << "Element: " << one << '\n';
  }
  std::cout << "Using Reference" << '\n';
  for(auto &ref: arr) {
    std::cout << "Element: " << ref << '\n';
  }
  return 0;
}
