#include <iostream>
using namespace std;

class Complex {
    float real,imag;
    public:
    //ham nhap 2 thanh phan tu ban phim
    void input_numb(){
        float r,i;
        cin >>r;
        cin >>i;
        real = r;
        imag = i;
    }
    //ham gan 2 thanh phan
    void set_numb(float r, float i){
        real = r;
        imag = i;
    }
    //ham gan thanh phan thuc
    void set_real(float r){
        real = r;
    }
    //ham lay thanh phan thuc
    int get_real(){
        return real;
    }
    //ham gan thanh phan ao
    void set_imag(float i){
        imag = i;
    }
    //ham lay thanh phan ao
    int get_imag(){
        return imag;
    }
    //ham hien thi thong tin
    void printf_numb(){
        cout << real<<" + "<<imag<<endl;
    }
    //ham lay ca so thuc va ao
    void get_numb(float &r, float &i){
        r = real;
        i = imag;
    }
};

int main(){
    Complex c1, c2, c3;
    float real_1=0, imag_1=0;
    cout << "Nhap so phuc 1: ";
    c1.input_numb(); //ham nhap 2 thanh phan
    real_1 = c1.get_real(); //ham lay tp thuc
    imag_1 = c1.get_imag(); //ham lay tp ao
    //gan so phuc c2
    c2.set_numb(3.5, 7.5);
    c2.set_imag(3.5);//gan tp thuc
    c2.set_real(7.5);//gan tp ao
    //ham hien thi thong tin
    c1.printf_numb();
    c2.printf_numb();
    //lay so phuc c3
    float real_3=0, imag_3=0;
    c3.get_numb(real_3, imag_3);
}