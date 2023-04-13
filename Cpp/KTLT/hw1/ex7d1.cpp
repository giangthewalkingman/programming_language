#include <iostream>
#include <string>
using namespace std;

class sv {
    public:
    string mssv;
    string ten;
    int tuoi;
};

int main(){
    string a,b;
    int c;
    sv Sv[100];
    string x[100], y[100];
    int n,z[100];
    do{
        cout << "Nhap so luong sinh vien: ";
        cin >> n;
    }while(n!=5);
    for(int i = 0; i < n; i++){
        cout << "Sinh vien "<< i+1 << ":" <<endl << "MSSV: ";
        cin >> Sv[i].mssv;
        cin.ignore();
        cout << "Ho va ten: ";
        getline (cin, Sv[i].ten);
        //cin.ignore();
        cout << "Tuoi: ";
        cin >> Sv[i].tuoi;
    }
    cout << "Ket qua thu duoc la:\n";
    for(int i = 0; i < n; i++){
       cout << "Sinh vien "<< i+1 << ": MSSV: " << Sv[i].mssv << "\tTen: " << Sv[i].ten <<"\tTuoi: " << Sv[i].tuoi;
       cout << endl;
    }
}