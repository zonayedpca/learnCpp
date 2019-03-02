#include <iostream>

class Calculator {
private:
    int m_a;
public:
    Calculator(int a = 0): m_a(a) {

    }
    int getValue() {
        return m_a;
    }
    friend Calculator operator- (Calculator& calc1, Calculator& calc2);
};

Calculator operator- (Calculator& calc1, Calculator& calc2) {
    return Calculator(calc1.m_a - calc2.m_a);
}


int main() {
    Calculator calc1{545};
    Calculator calc2{215};
    Calculator sub = calc1 - calc2;
    std::cout << "Substraction is: " << sub.getValue() << '\n';
    return 0;
}