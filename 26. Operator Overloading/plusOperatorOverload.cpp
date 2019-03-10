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
    friend Calculator operator+ (Calculator& calc1, Calculator& calc2);
};

Calculator operator+ (Calculator& calc1, Calculator& calc2) {
    return Calculator(calc1.m_a + calc2.m_a);
}


int main() {
    Calculator calc1{10};
    Calculator calc2{20};
    Calculator sum = calc1 + calc2;
    Calculator anoSum = sum + calc2;
    std::cout << "Sum is: " << anoSum.getValue() << '\n';
    return 0;
}