#include <iostream>

class Calculator {
private:
  int result;
public:
  Calculator(): result(0) {}
  void increase() {
    result += 1;
  }
  void getResult() {
    std::cout << "Result: " << result << '\n';
  }
  friend void reset(Calculator &calculator);
};

void reset(Calculator &calculator) {
  calculator.result = 0;
}

int main() {
  Calculator calculator;
  calculator.increase();
  calculator.increase();
  calculator.increase();
  calculator.increase();
  calculator.getResult();
  reset(calculator);
  calculator.increase();
  calculator.increase();
  calculator.increase();
  calculator.getResult();
  reset(calculator);
  calculator.getResult();
  return 0;
}
