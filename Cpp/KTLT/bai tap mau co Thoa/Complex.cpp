// Complex.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Complex {
    float thuc, ao;
public:
    void nhapSoPhuc() {
        cout << "\n Hay nhap thanh phan thuc va ao: ";
        cin >> thuc >> ao;
    }

    void hienThi() {
        cout << "\n So phuc la: " << thuc << " + j" << ao;
    }

    void setThuc(float _thuc) {
        thuc = _thuc;
    }

    float getThuc() {
        return thuc;
    }

    void setAo(float _ao) {
        ao = _ao;
    }

    float getAo() {
        return ao;
    }

    void setThucAo(float _thuc, float _ao) {
        thuc = _thuc;
        ao = _ao;
    }

    void getThucAo(float& _thuc, float& _ao) {
        _thuc = thuc;
        _ao = ao;
    }

    Complex tongHaiSoPhuc(Complex c1, Complex c2) {
        Complex tg;
        tg.thuc = c1.thuc + c2.thuc;
        tg.ao = c1.ao + c2.ao;
        return tg;
    }
    //Uu tien dung cach duoi
    Complex tongHaiSoPhuc2(Complex c) {
        Complex tg;
        tg.thuc = this->thuc + c.thuc;
        tg.ao = this->ao + c.ao;
        return tg;
    }

};
int main()
{
    Complex c1, c2;
    c1.nhapSoPhuc();
    c1.hienThi();
    c2.setThucAo(4, 5);
    c2.hienThi();
    
    Complex c3 = c2.tongHaiSoPhuc2(c1);
    c3.tongHaiSoPhuc(c1, c2);


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
