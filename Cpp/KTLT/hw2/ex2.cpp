#include <iostream>
using namespace std;
#include <cmath>
#include <string>

typedef struct {
    double r;
    double i;
    //r = real: phan thuc , i = imaginary: phan ao

} complex;

//void some_kind_of_function(r1,r2,i1,i2)
//2a
void tong(double x1, double x2, double y1, double y2);
void hieu(double x1, double x2, double y1, double y2);
void tich(double x1, double x2, double y1, double y2);
void thuong(double x1, double x2, double y1, double y2);
void ex2_1();

//2b
void tong_va_hieu(double x1, double x2, double y1, double y2);
void ex2_2();

//2c
void ex2_3();

//2d
int main(){
    char a;
    cout <<"Nhap cau ban muon lam(a||b||c||d):";
    cin >>a;
    switch (a)
    {
    case 'a':
    cout <<"2a"<<endl;
    ex2_1();
    break;
    case 'b':
    cout <<"2b"<<endl;
    ex2_2();
    break;
    case 'c':
    cout <<"2c"<<endl;
    ex2_3();
    break;
    default:
        break;
    }

    return 0;
}




//2a
void tong(double x1, double x2, double y1, double y2){
    double r = x1+x2;
    double i = y1+y2;
    cout <<"Tong 2 so phuc la: "<< r<<" + "<<i<<"i"; 
}
void hieu(double x1, double x2, double y1, double y2){
    double r = x1-x2;
    double i = y1-y2;
    cout <<"Hieu 2 so phuc la: "<< r<<" + "<<i<<"i"; 
}
void tich(double x1, double x2, double y1, double y2 ){
    double r,i;
    r=x1*x2-y1*y2;
    i=x1*y2+y1*x2;
    cout <<"Tich 2 so phuc la: "<< r<<" + "<<i<<"i"; 
}
void thuong(double x1, double x2, double y1, double y2 ){
    double r,i;
    r = (x1*x2 + y1*y2)/(pow(x2,2) + pow(y2,2));
    i = (y1*x2 - x1*y2)/(pow(x2,2) + pow(y2,2));
    cout <<"Thuong 2 so phuc la: "<< r<<" + "<<i<<"i"; 
}
void ex2_1(){
    double x1,x2,y1,y2;
    complex c1,c2;
    //means complex 1, complex 2
    cout << "So phuc 1:"<<endl;
    cout << "Nhap phan thuc:";
    cin >> c1.r;
    cout << "Nhap phan ao:";
    cin >> c1.i;
    cout << "So phuc 2:"<<endl;
    cout << "Nhap phan thuc:";
    cin >> c2.r;
    cout << "Nhap phan ao:";
    cin >> c2.i;
    tong(c1.r,c2.r,c1.i,c2.i);
    cout<<endl;
    hieu(c1.r,c2.r,c1.i,c2.i);
    cout<<endl;
    tich(c1.r,c2.r,c1.i,c2.i);
    cout<<endl;
    thuong(c1.r,c2.r,c1.i,c2.i);
}

//2b
void tong_va_hieu(double x1, double x2, double y1, double y2){
    double r1 = x1+x2;
    double i1 = y1+y2;
    double r2 = x1-x2;
    double i2 = y1-y2;
    cout <<"Tong 2 so phuc la: "<< r1<<" + "<<i1<<"i"<<endl; 
    cout <<"Hieu 2 so phuc la: "<< r2<<" + "<<i2<<"i"<<endl; 
}
void ex2_2(){
    double x1,x2,y1,y2;
    complex c1,c2;
    cout << "So phuc 1:"<<endl;
    cout << "Nhap phan thuc:";
    cin >> c1.r;
    cout << "Nhap phan ao:";
    cin >> c1.i;
    cout << "So phuc 2:"<<endl;
    cout << "Nhap phan thuc:";
    cin >> c2.r;
    cout << "Nhap phan ao:";
    cin >> c2.i;
    cout <<endl;
    tong_va_hieu(c1.r,c2.r,c1.i,c2.i);
}

//2c
void ex2_3(){
    complex c0;
    cout << "Nhap phan thuc:";
    cin >> c0.r;
    cout << "Nhap phan ao:";
    cin >> c0.i;
    cout << "So phuc vua nhap: "<<c0.r<<" + "<<c0.i<<"i";
}

/*
dung ham complex

*/

complex tong(complex a, comlex b){
    complex tg;
    tg.r = a.r + b.r;
    tg.i = a.i + b.i;
    return tg;
}

//ham tong hieu
void tong_Hieu(complex a, complex b, complex& Tong, complex& Hieu){
    Tong.r = a.r + b.r; Tong.i = a.i + b.i;
    Hieu.r = a.r - b.r; Hieu.i = a.i + b.i;
}

//ham hien thi
void hienthi(complex a){
    cout <<a.r<<" + "<<"("<<a.i<<")j";
}