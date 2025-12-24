#pragma once
#include "person.h"

class Student : public Person  // inheritance
{
private:
    double gpa;
public:
    Student();
    void setGPA(double gpa);
    double getGPA() const;
};