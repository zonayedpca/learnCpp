#ifndef DATE_H
#define DATE_H

class Date {
private:
  int m_day;
  int m_month;
  int m_year;
public:
  Date(int day, int month, int year);
  void getDate();
};

#endif
