#include "person.h"
#include "person.h"  // #pragma once
#include "student.h"
#include "student.h"  // #pragma once
#include "student.h"  // #pragma once

int main()
{
    Person p1;  // Default Constructor
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


    Student s;
    //s.setName("Choi Inha");
    s.setId(123L);
    s.setGPA(4.3);
    cout << "Student ID : " << s.getId() << '\n';
    cout << "Student GPA : " << s.getGPA() << '\n';    
    cout << "Student Name : " << s.getName() << '\n';

    s.setName("Lee Inha");
    cout << "Student Name : " << s.getName();
    return 0;
}