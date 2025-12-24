#include "student.h"

Student::Student()
{
    cout << "Student 기본생성자\n";
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