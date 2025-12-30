#include <iostream>
#include <string>
#include <typeinfo> 
using namespace std;

class Animal {
public:
	virtual void makeSound() {
		cout << "µ¿¹°ÀÌ ¿ïÀ½¼Ò¸®¸¦ ³À´Ï´Ù\n";
	}
};
class Dog : public Animal {
public:
	void makeSound() override {
		cout << "¸Û¸Û!\n";
	}
};
class Cat : public Animal {
public:
	void makeSound() override {
		cout << "³Ä¿Ë~\n";
	}
};
int main()
{
	Animal* pa = new Dog;  // upcasting
	pa->makeSound();
	//Dog* pd = (Dog*)pa;  // c style downcasting (old)
	Dog* pd = dynamic_cast<Dog*>(pa);  // c++11 style downcasting (modern)
	pd->makeSound();
	delete pd;
	pd = nullptr;

	//Animal a;
	//a.makeSound();
	//Dog d;
	//d.makeSound();
	return 0;
}