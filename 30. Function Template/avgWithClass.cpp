#include <iostream>

class Cents {
private:
  int m_cent;
public:
  Cents(int cent): m_cent(cent) {}
  friend std::ostream& operator<< (std::ostream &out, const Cents &cents) {
    out << cents.m_cent;
    return out;
  }
  Cents& operator+= (Cents& cent) {
    m_cent += cent.m_cent;
    return *this;
  }

  Cents& operator/=(int value) {
    m_cent /= value;
    return *this;
  }
};

template <typename T>
T average(T *array, int length) {
  T result = 0;
  for(int count = 0; count < length; ++count) {
    result += array[count];
  }
  result /= length;
  return result;
}

int main() {
  int arr[] = { 323, 5, 35, 23, 536, 64 };
  int avg = average(arr, 6);
  std::cout << "Average: " << avg << '\n';

  Cents cls[] = { Cents(323), Cents(5), Cents(35), Cents(23), Cents(536), Cents(64) };
  std::cout << "Average of Class of Array: " << average(cls, 6) << '\n';
  return 0;
}
