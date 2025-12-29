#pragma once
#include <string>
#include <iostream>
#include <cassert>
using namespace std;

class Name
{
  private:
    string first;
    string last;
  public: 
    Name(string first, string last);   
    ~Name(); 
    void print() const; 
};