#include <iostream>

struct Person {
  int age;
  char gender;
  double salary;
};

int main() {
  char gender;
  Person person[5] = {0, '0', 00.00};
  std::cout << "Inserting Data to person Array: " << '\n';
  for(int i = 0; i < 5; ++i) {
    gender = i % 2 == 0 ? 'M' : 'F';
    person[i] = {(20 + i), gender, (1000.00 + i * 1000)};
  }
  for(int i = 0; i < 5; ++i) {
    std::cout << "Age: " << person[i].age << ", Gender: " << person[i].gender << " and Salary: " << person[i].salary << '\n';
  }
  return 0;
}
