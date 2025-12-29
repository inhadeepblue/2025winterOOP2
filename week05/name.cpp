#include "name.h"

Name::Name(string last, string first) : first(first), last(last)
{
}
Name::~Name()
{
}
void Name::print() const
{
  cout << "직원 이름: " << last << " " << first << endl; 
}