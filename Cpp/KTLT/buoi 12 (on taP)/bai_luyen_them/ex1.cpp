const int a = -1;

//#pragma once
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

//a
class cHocphan{
    string maHP;
    string tenHP;
    int soTC;
    public:
    //b
    cHocphan():maHP("\0"), tenHP("\0"), soTC(0) {}
    cHocphan(string m, string t, int s):maHP(m), tenHP(t), soTC(s){}
    void nhapDuLieu();
    //c
    int loaiHP();
    void hienThiCLN();
};

int cHocphan::loaiHP(){
    int conVert = maHP[2] - '0'; // convert tu string element sang int
    return conVert;
}

void cHocphan::nhapDuLieu(){
    //cin.ignore();
    cout << "Nhap ma hoc phan: ";
    getline(cin, maHP);
    cout << "Nhap ten hoc phan: ";
    getline(cin, tenHP);
    cout << "Nhap so tin chi: ";
    cin >> soTC;
    cin.ignore();
}

void cHocphan::hienThiCLN(){
    int x = loaiHP();
    if(x == 3){
        cout <<endl;
        cout <<"Ma hoc phan: "<<maHP<<endl;
        cout <<"Ten hoc phan: "<<tenHP<<endl;
        cout <<"So tin chi: "<<soTC<<endl;
    }
}

//d
int main(){
    //i
    cHocphan c1("ET2031", "Ki thuat lap trinh C/C++", (a+1)%3);
    //i
    cHocphan *ptr_hp = new cHocphan[a+3];
    for(int i = 0; i < a+3; i++){
        ptr_hp[i].nhapDuLieu();

    }
    //iii
    cout <<"Danh sach hoc phan thuoc khoi kien thuc cot loi nganh: "<<endl;
    c1.hienThiCLN();
    for(int i = 0; i < a+3; i++){
        ptr_hp[i].hienThiCLN();
    }
    return 0;
}

