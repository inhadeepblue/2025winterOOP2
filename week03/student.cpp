#include "student.h"

Student::Student()
{
    cout << this << " Student 기본 생성자\n";
}

Student::Student(long int id, string name, double gpa)
    //:id(id), name(name), gpa(gpa)
    : Person(id, name), gpa(gpa)
{
    cout << this << " Student 매개변수 생성자\n";
}

Student::Student(const Student& student)
    : Person(student), gpa(student.gpa)  // 부모의 복사생성자 호출
{
    cout << this << " Student 복사 생성자\n";
}

Student::~Student()
{
    cout << this << " Student 소멸자\n";
}

void Student::setGPA(double gp)
{
    gpa = gp;
    assert(gpa >= 0 && gpa <= 4.5);
}

double Student::getGPA() const
{
    return gpa;
}