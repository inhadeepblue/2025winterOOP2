#pragma once
#include "myexception.h"
class MyMemoryException : public MyException {
public:
	MyMemoryException(int Code, DynamicArray* Address);
};