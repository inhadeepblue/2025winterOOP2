#pragma once
#include "name.h"

class Employee
{
  private:
    Name name;  // has-a
    int salary;
  public: 
    Employee(string last, string first, int salary);  // composition
    ~Employee(); 
    void print() const; 
};