#include <iostream>

template <typename T>
T& max(T& x, T& y) {
  return (x > y) ? x : y;
}

class Cents {
private:
  int m_cent;
public:
  Cents(int cent) : m_cent(cent) {}

  friend bool operator>(const Cents &c1, const Cents &c2) {
    return (c1.m_cent > c2.m_cent);
  }
};

int main() {
  Cents dollar(1);
  Cents rupees(67);

  Cents maxCents = max(dollar, rupees);
  return 0;
}
