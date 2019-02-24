#include <iostream>

int main() {
  int age;
  getAge:
  std::cout << "Enter your age: ";
  std::cin >> age;
  if(age < 18 || age > 90) {
      goto getAge;
  }
  std::cout << "He is an Adult" << '\n';
  return 0;
}
