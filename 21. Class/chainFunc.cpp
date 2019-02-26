#include <iostream>

class Calculator {
private:
  int m_result;
public:
  Calculator(): m_result(0) {}
  Calculator& add(int num) {
    m_result += num;
    return *this;
  }
  Calculator& sub(int num) {
    m_result -= num;
    return *this;
  }
  Calculator& mul(int num) {
    m_result *= num;
    return *this;
  }
  int getResult() {
    return m_result;
  }
};

int main() {
  Calculator calculator;
  std::cout << "Calculator" << '\n';
  calculator.add(10).mul(2).sub(2);
  std::cout << "Result: " << calculator.getResult() << '\n';
  return 0;
}
