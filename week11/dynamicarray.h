#pragma once
#include <iostream>
#include <string>

using namespace std;
class DynamicArray {
private:
	int size;
	int* ptr;
public:
	DynamicArray();
	DynamicArray(int size);
	~DynamicArray();
	void setAt(int value, int index);
	int getAt(int index);
};