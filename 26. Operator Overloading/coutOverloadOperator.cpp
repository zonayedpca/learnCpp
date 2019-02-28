#include <iostream>

class Person {
private:
  int m_day;
  int m_month;
  int m_year;
public:
  Person(int day, int month, int year): m_day(day), m_month(month), m_year(year) { }
  friend std::ostream& operator<< (std::ostream &cout, const Person &person);
};

std::ostream& operator<< (std::ostream &cout, const Person &person) {
  cout << "Value: " << person.m_day << "/" << person.m_month << "/" << person.m_year;
  return cout;
}

int main() {
  Person person { 26, 02, 2019 };
  std::cout << person;
  return 0;
}
