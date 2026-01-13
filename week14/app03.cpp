#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Desc {
public:
	bool operator()(int a, int b) {  // functor
		return a > b;
	}
};
bool descFunction(int a, int b) {  // function
	return a > b;
}
void print(int value)
{
	cout << value << "  ";
}
int main()
{
	Desc desc;
	vector <int> vec;
	vec.push_back(17);
	vec.push_back(9);
	vec.push_back(3);
	vec.push_back(18);
	vec.push_back(15);
	vec.push_back(11);
	for_each(vec.begin(), vec.end(), print);
	cout << endl << endl;
	sort(vec.begin(), vec.end());  // asc
	for_each(vec.begin(), vec.end(), print);
	cout << endl << endl;
	//sort(vec.begin(), vec.end(), greater<int>()); // built in
	//sort(vec.begin(), vec.end(), desc); // functor
	//sort(vec.begin(), vec.end(), descFunction); // function
	sort(vec.begin(), vec.end(), [](int x, int y) {return x > y;}); // lambda function
	for_each(vec.begin(), vec.end(), print);
	cout << endl << endl;
	return 0;
}