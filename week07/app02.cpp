#include <iostream>
#include <cassert>
using namespace std;

class Complex {
public:
    int real;
    int imaginary;

    Complex(int real, int imaginary) : real(real), imaginary(imaginary) {
    }

    //Complex operator+(Complex right) {
    //    return Complex(this->real + right.real, this->imaginary + right.imaginary);
    //}
};

// Overloading as a nonmember
Complex operator+(Complex left, Complex right) {
    return Complex(left.real + right.real, left.imaginary + right.imaginary);
}

int main()
{
    Complex c1(9, 7);
    Complex c2(1, 4);
    //Complex c3 = c1.operator+(c2);
    Complex c3 = operator+(c1, c2);  //Complex c3 = c1 + c2;

    cout << c3.real << "+" << c3.imaginary << "i\n";

    return 0;
}