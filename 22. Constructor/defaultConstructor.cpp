#include <iostream>

class Person {
private:
  int m_age;
  int m_salary;
  char m_gender;
public:
  Person(int age = 0, int salary = 0, char gender = 'M') {
    m_age = age;
    m_salary = salary;
    m_gender = gender;
  }
  void print() {
    std::cout << "Age: " << m_age << ", Salary: " << m_salary << " and Gender: " << m_gender << '\n';
  }
};

int main() {
  std::cout << "Default Constructor" << '\n';
  Person person = Person();
  person.print();
  return 0;
}
