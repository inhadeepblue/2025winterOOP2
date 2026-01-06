#include "dynamicarray.h"

DynamicArray::DynamicArray()
{
}

DynamicArray::DynamicArray(int size) : size(size)
{
	//this->size = size;
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
	if ((index < 0) || (index >= size))
		//throw 4885;
		throw "인덱스의 범위를 벗어나 값을 할당 할 수 없습니다. 4885\n";
	cout << "힙메모리 " << index << "번 위치에 값 " << value <<" 할당\n";
	ptr[index] = value;
}

int DynamicArray::getAt(int index)
{
	if ((index < 0) || (index >= size))
		//throw 4886;
		throw "인덱스의 범위를 벗어나 값을 꺼낼 수 없습니다. 4886\n";
	return ptr[index];
}
