#include "person.h"

Person::Person(string id, Date birthDate) : id(id), birthDate(birthDate)
{
}
Person::~Person()
{
}
void Person::print() const
{ 
  cout << "주민등록번호: " << id << endl;
  cout << "생년월일: "; 
  birthDate.print();
  cout << endl << endl;
}