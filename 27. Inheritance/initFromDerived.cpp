#include <iostream>
#include <string>

class Person {
private:
  std::string m_name;
  int m_age;
public:
  Person(std::string name, int age): m_name(name), m_age(age) {
    std::cout << "Constructor of Base is called" << '\n';
  }
  void getInfo() {
    std::cout << "Name: " << m_name << " and Age: " << m_age << '\n';
  }
};

class Teacher: public Person {
private:
  std::string m_subject;
public:
  Teacher(std::string name, int age, std::string subject): Person(name, age), m_subject(subject) {
    std::cout << "Constructor of Child is called" << '\n';
  }
};

int main() {
  Person person{"Zonayed Ahmed", 22};
  person.getInfo();
  std::cout << "===============" << '\n';
  Teacher teacher{"Shafiq Islam", 41, "Physics"};
  teacher.getInfo();
  return 0;
}
