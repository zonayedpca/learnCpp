#include <iostream>

class Person {
public:
  void normalPrint() {
    std::cout << "Base Class" << '\n';
  }

  virtual void print() {
    std::cout << "Virtual: Base Class..." << '\n';
  }
};

class Human : public Person {
public:
  void normalPrint() {
    std::cout << "Derived Class" << '\n';
  }

  void print() {
    std::cout << "Virtual: Derived Class..." << '\n';
  }
};

int main() {
  Human h;
  Person &person = h;
  person.normalPrint();
  person.print();
  return 0;
}
