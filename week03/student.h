#pragma once
#include "person.h"

class Student final : public Person  // inheritance
{
private:
    double gpa;
public:
    Student();
    Student(long int id, string name, double gpa);
    Student(const Student& student);
    ~Student();
    void setGPA(double gpa);
    double getGPA() const;
};