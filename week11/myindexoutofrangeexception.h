#pragma once
#include "myexception.h"
class MyIndexOutofRangeException : public MyException {
public:
	MyIndexOutofRangeException(int code, const char* description, DynamicArray* address);
};