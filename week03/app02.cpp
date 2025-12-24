#include "person.h"
#include "person.h"  // #pragma once
#include "student.h"
#include "student.h"  // #pragma once
#include "student.h"  // #pragma once

Person p3;

int main()
{
    Person p1;  // Default Constructor

    Person* p4 = new Person(488, "Jo Inha");
    delete p4;
    p4 = nullptr;

    Person p2(333, "Hong Inha");
    //p1.setId(12L);  // assert
    p1.setId(500L);
    p1.setName("Kim Inha");
    cout << "ID : " << p1.getId() << '\n';
    cout << "Name : " << p1.getName();
    cout << endl << endl;

    cout << "ID : " << p2.getId() << '\n';
    cout << "Name : " << p2.getName();
    cout << endl << endl;

    {
        Student s2;
    }
    
    Student s1;    
    //s1.setName("Choi Inha");
    s1.setId(123L);
    s1.setGPA(4.3);
    cout << "Student ID : " << s1.getId() << '\n';
    cout << "Student GPA : " << s1.getGPA() << '\n';    
    cout << "Student Name : " << s1.getName() << '\n';

    s1.setName("Lee Inha");
    cout << "Student Name : " << s1.getName();
    return 0;
}