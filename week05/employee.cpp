#include "employee.h"

Employee::Employee(string last, string first, int salary) : name(last, first), salary(salary)
{
  assert(salary > 10000000 and salary < 100000000);
}
Employee::~Employee()
{
}
void Employee::print() const
{
  name.print();
  cout << "급여: " << salary << "원\n";
} 