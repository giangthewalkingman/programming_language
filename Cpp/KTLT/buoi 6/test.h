#include <iostream>
using namespace std;

class Complex {
    int real, imag;
    public: 
    void input(Complex a){
        cout<<"real: ";
        cin >>a.real;
        cout<<"imag: ";
        cin >>a.imag;
    };
    void output(){
        cout << real << "+("<<imag<<")";
    }
    void get_r(int &r); void set_r(int r);
    void get_i(int &i); void set_i(int i);
    void get(int &r, int &i);
    void set(int r, int i);
    void sum(Complex m,Complex n){
        Complex p;
        p.real = m.real + n.real;
        p.imag = m.imag + n.imag;
        cout <<"Sum of them is: "<<p.real<<" + ("<<p.imag<<")";
    }
};