#include <iostream>
#include <math.h>
//#include <iostream.h>
using namespace std;

class Complex{
    int real, imag;
    public:
    Complex(int r = 0, int i = 0):real(r), imag(i) {}
//     Cú pháp định nghĩa một toán tử nạp chồng:

// Kiểu_trả_về operator <toán tử> (danh_sách_đối_số){
//Định nghĩa toán tử
// }
    Complex operator+(const Complex& b) const {
        Complex z(real + b.real, imag + b.imag);
        return z;
    }
    Complex operator-(const Complex& b) const {
        Complex z(real - b.real, imag - b.imag);
        return z;
    }
    Complex operator*(const Complex& b) const {
        Complex z(real*b.real-imag*b.imag, imag*b.real+real*b.imag);
        return z;
    }
    Complex operator+=(const Complex& b) {
        Complex z(real += b.real, imag += b.imag);
        return z;
    }
    Complex operator-=(const Complex& b) {
        Complex z(real -= b.real, imag -= b.imag);
        return z;
    }
    Complex operator*=(const Complex& b) {
        Complex z(real *= b.real, imag *= b.imag);
        return z;
    }
    bool operator==(const Complex& b) const {
        return ((real == b.real) && (imag == b.imag));
    }
    bool operator!=(const Complex& b) const {
        return !((real == b.real) && (imag == b.imag));
    }
    bool operator>(const Complex& b) const {
        return (real*real + imag*imag > b.real*b.real + b.imag*b.imag);
    }
    bool operator<(const Complex& b) const {
        return (real*real + imag*imag < b.real*b.real + b.imag*b.imag);
    } 
    void print_numbers();
};

void Complex::print_numbers(){
    cout <<endl<<real<<" + ("<<imag<<")"<<endl;
}

int main(){
    Complex c1(3,4), c2(5,6);
    Complex c3;
    c3 = c1 + c2;
    c3.print_numbers();
    Complex c4;
    c4 += c1;
    c4 += c1;
    c4.print_numbers();
    int x = c1<c2;
    cout <<"So sanh c1 va c2: "<<x<<endl;
    return 0;

}

