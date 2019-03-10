#include <iostream>
#include <string>

class Person {
public:
  std::string m_name;
  int m_age;
  Person(std::string name = "", int age = 0): m_name(name), m_age(age) {}
  void getName() {
    std::cout << "Name: " << m_name << '\n';
  }
};

class Teacher: public Person {
public:
  std::string m_subject;
  Teacher(std::string subject = ""): m_subject(subject) {}
};

class Student: public Person {
public:
  std::string m_course;
  Student(std::string course = ""): m_course(course) {}
};

class Course: public Student {
public:
  int m_code;
  Course(int code=0): m_code(code) {}
};

int main() {
  Person person;
  person.m_name = "Zonayed Ahmed";
  person.getName();
  Teacher teacher;
  teacher.m_name = "Shafiq Islam";
  teacher.getName();
  Student student;
  student.m_name = "Sohel Rana";
  student.getName();
  Course course;
  course.m_name = "Physics";
  course.getName();
  return 0;
}
