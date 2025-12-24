#include "person.h"

Person::Person() : name("무명")
{
    cout << this << " Person 기본 생성자\n";
}

Person::Person(long int id, string name)
{
    cout << this << " Person 매개변수 생성자\n";
    this->id = id;
    this->name = name;
}

Person::Person(const Person& person) : id(person.id), name(person.name)
{
    cout << this << " Person 복사 생성자\n";
}

Person::~Person()
{
    cout << this << " Person 소멸자\n";
}

void Person::setId(long int id)
{
    this->id = id;
    assert(id >= 100 && id <= 999);
}

long Person::getId() const
{
    //id = 999L;
    return id;
}

void Person::setName(string name)
{
    //name = name;  // 매개변수랑 멤버변수를 구분하지 못함
    this->name = name;
}

string Person::getName() const
{
    //name = string("Park Inha"); // name 멤버변수는 mutable (C++11)
    return name;
}
