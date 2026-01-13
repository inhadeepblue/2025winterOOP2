#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> vec1;
vector<int> vec2;
void print(int value)
{
	cout << value << "  ";
}
void square(int value)
{	
	vec2.push_back(value * value);
}
int main()
{
	vec1.push_back(1);
	vec1.push_back(2);
	vec1.push_back(3);	

    for_each(vec1.begin(), vec1.end(), print);
	cout << '\n';
	for_each(vec1.begin(), vec1.end(), square);	
	cout << '\n';
	for_each(vec2.begin(), vec2.end(), &print);
	return 0;
}