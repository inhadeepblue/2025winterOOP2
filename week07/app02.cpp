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
ostream& operator<<(ostream& out, const Complex& right) {
    out << right.real << "+" << right.imaginary << "i\n";
    return out;
}
int main()
{
    Complex c1(9, 7);
    cout << c1.real << "+" << c1.imaginary << "i\n";
    cout << c1;

    return 0;
}