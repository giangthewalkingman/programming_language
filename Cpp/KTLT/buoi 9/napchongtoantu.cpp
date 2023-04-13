#include <iostream>
using namespace std;

class Complex {
    int real, imag;
    public:
    Complex(int r = 0, int i = 0): real(r), imag(i) {}
    Complex operator+=(const Complex& b) const {
        this->real+=b.real;
        this->imag+=b.imag;
        return *this;
    }
    Complex operator+(const Complex& b) const {
        Complex z(real + b.real, imag + b.imag);
        return z;
    }
}