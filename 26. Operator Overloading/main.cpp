#include <iostream>

class Calculator {
private:
  int m_result;
public:
  Calculator(int value): m_result(value) {}
  friend Calculator operator+ (Calculator &calc1, Calculator &calc2);
  int getResult() {
    return m_result;
  }
};

Calculator operator+ (Calculator &calc1, Calculator &calc2) {
  return calc1.m_result + calc2.m_result;
}

int main() {
  Calculator calc1(12);
  Calculator calc2(8);
  Calculator result = calc1 + calc2;
  std::cout << "Result: " << result.getResult() << '\n';
  return 0;
}
