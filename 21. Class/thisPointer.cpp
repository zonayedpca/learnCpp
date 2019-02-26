#include <iostream>

class Person {
private:
  int age;
  int salary;
  char gender;
public:
  Person(int age, int salary, int gender) {
    // (*this).age = age;
    // (*this).salary = salary;
    // (*this).gender = gender;
    this->age = age;
    this->salary = salary;
    this->gender = gender;
  }
  void print() {
    std::cout << "Age: " << age << ", salary: " << salary << " and Gender: " << gender << '\n';
  }
};

int main() {
  Person person = Person(32, 40000, 'M');
  person.print();
  return 0;
}
