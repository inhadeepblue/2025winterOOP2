#include "mymemoryexception.h"

MyMemoryException::MyMemoryException(int code, DynamicArray* address)
	: MyException(code, "메모리 오류\n", address)
{
}
