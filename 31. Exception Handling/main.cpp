#include <iostream>

int main() {
  std::cout << "Exception Handling" << '\n';
  try {
    throw -1;
    // throw 'A';
    // throw 3.1416;
  } catch(int err) {
    std::cout << "Integer Error: " << err << '\n';
  } catch(double err) {
    std::cout << "Double Error: " << err << '\n';
  } catch(char err) {
    std::cout << "Character Error: " << err << '\n';
  }
  return 0;
}
