#include <iostream>
using namespace std;

void print(int value1, int value2)
{
	cout << value1 << endl;
	cout << value2 << endl;
}
void fun(int x, void(*f)(int, int))
{
	f(x, x*x);
}
int main()
{
	//double(*k)(int, int) = &print;
	void(*k)(int, int) = &print;
	k(7, 11);
	fun(4, print);
	fun(9, print);
	return 0;
}