#pragma once
#include <string>
#include <iostream>
using namespace std;

class Company
{
private:
    string companyName;
    string companyAddress;
public:
    Company(string name, string address);
    ~Company();
    void print() const;
};