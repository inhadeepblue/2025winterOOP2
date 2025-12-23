#include <iostream>
using namespace std;

int test;

int main() {
	int kid = 3000;
	int adult = 10000;
	int senior = 5000;
	int total = 0;

	int human = 0;
	//int ages[human];

	cout << "몇 분? ";
	cin >> human;
	int* ages = new int[human];  // assign heap memory

	for (int i = 0; i < human;i++) {
		cout << "나이 입력 : ";
		cin >> ages[i];
	}	
	for (int i = 0; i < human;i++) {
		int age = *(ages + i);

		if (age < 9) {
			total = total + kid;
		}
		else if (age < 65) {
			total = total + adult;
		}
		else {
			total = total + senior;
		}
	}

	//cout << ages;
	//cout << '\n';
	//cout << &ages;
	//cout << '\n';
	//cout << &human;
	//cout << '\n';
	//cout << &test;

	cout << human << "분의 총 요금은 " << total << "원 입니다\n";
	delete[] ages;  // free heap memory
	ages = nullptr;  // clear memory address

	return 0;
}