#include <iostream>
#include "Date.h"

Date::Date(int day, int month, int year) {
  m_day = day;
  m_month = month;
  m_year = year;
}

void Date::getDate() {
  std::cout << m_day << "/" << m_month << "/" << m_year << '\n';
}

int main(int argc, char const *argv[]) {
  Date today = Date(26, 02, 2019);
  today.getDate();
  return 0;
}
