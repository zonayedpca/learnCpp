#include <iostream>

int main() {
  int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
  std::cout << "The array name itself is the first element's array[0](" << &array[0] << ") address: " << array << '\n';
  std::cout << "We can access array element using pointer: " << *&array[3] << '\n';
  std::cout << "Even pointer calculation is also possible: " << *(array + 3) << '\n';
  return 0;
}
