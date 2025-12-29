#pragma once
#include "date.h"

class Person
{
  private:
    string id;
    Date birthDate;  // has-a
  public: 
    Person(string identity, Date birthDate);  // aggregation
    ~Person(); 
    void print() const; 
};