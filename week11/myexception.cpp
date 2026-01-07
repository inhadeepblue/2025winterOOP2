#include "myexception.h"
#include "dynamicarray.h"

MyException::MyException(int errorCode, const char* errorDescription, DynamicArray* errorAddress)
	:errorCode(errorCode), errorDescription(errorDescription), errorAddress(errorAddress)
{
}

MyException::~MyException()
{
}
