#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
  std::cout << "Total argument passed: " << argc << '\n';
  for(int index = 0; index < argc; index++) {
    std::cout << "Argument[" << (index + 1) << "]: " << argv[index] << '\n';
  }
  return 0;
}
