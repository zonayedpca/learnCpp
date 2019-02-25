#include <iostream>
#include <cstdarg>

void getArgs(int count, ...) {
  std::cout << "Ellipsis" << '\n';
  va_list list;
  va_start(list, count);
  for(int index = 0; index < count; ++index) {
    std::cout << va_arg(list, int) << '\n';
  }
}

int main() {
  getArgs(10, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9);
  getArgs(4, 46, 23, 57, 23);
  return 0;
}
