#include <iostream>

class Date {
private:
  int m_day;
  int m_month;
  int m_year;
public:
  Date(int day=0, int month=0, int year=0): m_day(day), m_month(month), m_year(month) {}

  Date &operator= (const Date &date);
};

Date& Date::operator= (const Date &date) {
  m_day = date.m_day;
  m_month = date.m_month;
  m_year = date.m_year;
  return *this;
}

int main() {
  Date today {28, 02, 2019};
  Date tomorrow;
  tomorrow = today;
  std::cout << "Today: " << '\n';
  return 0;
}
