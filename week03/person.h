#pragma once
#include <iostream>
#include <cassert>
#include <string>
using namespace std;

//class Person final  // 상속 불가
class Person
{
private:
    long int id;
    mutable string name;
public:
    //Person() {
    //    cout << "Person 기본생성자\n";
    //}
    Person();
    Person(long int id, string name);
    Person(const Person& person);
    ~Person();

    void setId(long identity);
    long getId() const;
    void setName(string n);
    string getName() const;

};
