#include <iostream>

struct Person {
  int age;
  char gender;
  double salary;
};

int main() {
  std::cout << "Structs with Pointer" << '\n';
  Person person;
  Person *ptr = &person;
  std::cout << "person: " << &person << '\n';
  std::cout << "person.age: " << &person.age << '\n';
  std::cout << "person.gender: " << &person.gender << '\n';
  std::cout << "person.salary: " << &person.salary << '\n';
  (*ptr).age = 22;
  (*ptr).gender = 'M';
  (*ptr).salary = 30000.23;
  std::cout << "Age: " << (*ptr).age << ", gender: " << (*ptr).gender << " and salary: " << (*ptr).salary << '\n';
  ptr -> age = 32;
  ptr -> gender = 'M';
  ptr -> salary = 40000.1232;
  std::cout << "Age: " << ptr -> age << ", gender: " << ptr -> gender << " and salary: " << ptr -> salary << '\n';
  return 0;
}
