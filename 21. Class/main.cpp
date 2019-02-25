#include <iostream>

class Date {
private:
  int m_day;
  int m_month;
  int m_year;
public:
  Date(int day, int month, int year): m_day(day), m_month(month), m_year(year) {
  }

  void getDate() {
    std::cout << m_day << "/" << m_month << "/" << m_year << '\n';
  }
};

int main(int argc, char const *argv[]) {
  Date today {25, 02, 2019};
  today.getDate();
  return 0;
}
