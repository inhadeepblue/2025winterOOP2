#include "dynamicarray.h"
#include "myexception.h"
#include "mymemoryexception.h"
#include "myindexoutofrangeexception.h"

DynamicArray::DynamicArray()
{
}

DynamicArray::DynamicArray(int size) : size(size)
{
	try {
		cout << this << "동적배열객체를 생성. 힙메모리 할당!\n";
		ptr = new int[size];
		throw MyMemoryException(1000, this);
		cout << this << "이 부분은 실행안됨!\n";
	}
	catch(...){
		delete[] ptr;
		ptr = nullptr;
		cout << this << "객체 생성 실패! 자원해제~\n";
		throw;
	}
	cout << "객체 생성 완료!\n";
}

DynamicArray::~DynamicArray()
{
	cout << "동적배열객체 소멸. 메모리를 정리합니다~\n";
	delete[] ptr;
	ptr = nullptr;
}

void DynamicArray::setAt(int value, int index)
{
	if ((index < 0) || (index >= size))
		throw MyIndexOutofRangeException(4886, "인덱스의 범위를 벗어나 값을 할당 할 수 없습니다.", this);
	cout << "힙메모리 " << index << "번 위치에 값 " << value <<" 할당\n";
	ptr[index] = value;
}

int DynamicArray::getAt(int index)
{
	if ((index < 0) || (index >= size))
		throw MyIndexOutofRangeException(4886, "인덱스의 범위를 벗어나 값을 꺼낼 수 없습니다.", this);
	return ptr[index];
}
