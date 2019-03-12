#include <iostream>

class Base {
public:
  Base() {
    std::cout << "Base Class" << '\n';
  }
};

class ChildOne: public Base {
public:
  ChildOne() {
    std::cout << "ChildOne Class" << '\n';
  }
};

class ChildTwo: public Base {
public:
  ChildTwo() {
    std::cout << "ChildTwo Class" << '\n';
  }
};

class Derived: public ChildOne, ChildTwo {
public:
  Derived() {
    std::cout << "Derived Class" << '\n';
  }
};

int main() {
  Derived derived;
  return 0;
}
