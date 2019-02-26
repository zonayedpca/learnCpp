#include <iostream>

class Person {
public:
  Person() {
    std::cout << "The Constructor Has been Run" << '\n';
  }
  
  ~Person() {
    std::cout << "I am the Destructor!" << '\n';
  }
};

int main() {
  Person person;
  return 0;
}
