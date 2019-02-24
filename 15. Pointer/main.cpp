#include <iostream>

int main() {
  std::cout << "Pointers" << '\n';
  int *ptr;
  std::cout << "Pointer without Initialization contains garbage address: " << ptr << '\n';
  int x = 10;
  ptr = &x;
  std::cout << "The value of pointer ptr: " << ptr << " will be same as the address of x: " << &x << '\n';
  std::cout << "So the value stored in the ptr ptr is: " << *ptr << " which is equavalent to the value of x: " << x << '\n';
  *ptr = 20;
  std::cout << "The value stored in ptr has changed to: " << *ptr << ", so the x is also changed: " << x << '\n';
  int *anoPtr = &x;
  std::cout << "anoPtr is initialized with the address of x: " << *anoPtr << '\n';
  return 0;
}
