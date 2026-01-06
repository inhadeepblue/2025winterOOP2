#include "dynamicarray.h"

DynamicArray::DynamicArray()
{
}

DynamicArray::DynamicArray(int size)
{
	cout << "동적배열객체를 생성. 힙메모리 할당!\n";
	ptr = new int[size];
}

DynamicArray::~DynamicArray()
{
	cout << "동적배열객체 소멸. 메모리를 정리합니다~\n";
	delete ptr;
	ptr = nullptr;
}

void DynamicArray::setAt(int value, int index)
{
	cout << "힙메모리 " << index << "번 위치에 값 " << value <<" 할당\n";
	ptr[index] = value;
}

int DynamicArray::getAt(int index)
{
	return ptr[index];
}
