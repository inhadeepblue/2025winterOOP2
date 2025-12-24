#include "student.h"

Student::Student()
{
    cout << this << " Student 기본 생성자\n";
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