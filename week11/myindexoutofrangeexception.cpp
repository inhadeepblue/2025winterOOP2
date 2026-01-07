#include "myindexoutofrangeexception.h"

MyIndexOutofRangeException::MyIndexOutofRangeException(int code, const char* description, DynamicArray* address)
	:MyException(code, description, address)
{

}
