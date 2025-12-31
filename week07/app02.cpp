#include <iostream>
#include <cassert>
using namespace std;

class Complex {
public:
    int real;
    int imaginary;

    Complex(int real, int imaginary) : real(real), imaginary(imaginary) {
    }
    // Overloading as a member function
    Complex operator+(const Complex& right) {
        return Complex(this->real + right.real, this->imaginary + right.imaginary);
    }
    Complex& operator++() {
        this->real = this->real + 1;
        //return Complex(this->real, this->imaginary);
        return *this;
    }
    Complex& operator++(int) {
        Complex previous(this->real, this->imaginary);
        this->real = this->real + 1;
        return previous;
    }
};

// Overloading as a nonmember function
//Complex operator+(const Complex& left, const Complex& right) {
//    // right.real = 99;
//    return Complex(left.real + right.real, left.imaginary + right.imaginary);
//}

int main()
{
    Complex c1(9, 7);
    Complex c2(1, 4);
    // Complex c3 = c1.operator+(c2);
    // Complex c3 = operator+(c1, c2);  
    Complex c3 = c1 + c2;

    cout << c3.real << "+" << c3.imaginary << "i\n";
    //++c3;
    //c3++;
    Complex c4 = ++c3;
    //Complex c4 = c3++;
    cout << c3.real << "+" << c3.imaginary << "i\n";
    cout << c4.real << "+" << c4.imaginary << "i\n";

    return 0;
}