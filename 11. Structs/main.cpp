#include <iostream>

struct Employee {
  int age;
  char gender;
  double salary;
};

int main() {
  std::cout << "Structs" << '\n';
  Employee employee = {22, 'M', 30000.00};
  std::cout << "Age: " << employee.age << ", gender: " << employee.gender << " and salary: " << employee.salary << '\n';
  Employee employee2 = {17, 'F'};
  std::cout << "Age: " << employee2.age << ", gender: " << employee2.gender << " and salary: " << employee2.salary << '\n';
  std::cout << "C++11" << '\n';
  Employee employee3 {42, 'M', 43000.23};
  std::cout << "Age: " << employee3.age << ", gender: " << employee3.gender << " and salary: " << employee3.salary << '\n';
  return 0;
}
