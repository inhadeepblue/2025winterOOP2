#pragma once
#include <iostream>
#include <string>
using namespace std;
class DynamicArray {
	int size;
	int* ptr;
public:
	DynamicArray();
	DynamicArray(int size);
	~DynamicArray();
};