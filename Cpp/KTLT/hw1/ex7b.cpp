#include <iostream>
#include <string>
using namespace std;

class sv {
    public:
    string mssv;
    string ten;
    int tuoi;
    sv(string x, string y, int z){
        mssv = x;
        ten = y;
        tuoi = z;
        //cout << "MSSV: " << mssv << "\tHo va ten: " << ten << "\tTuoi:" << tuoi;
    }
};

int main(){
    string x, y;
    int z;
    cout << "Nhap MSSV: ";
    cin >> x;
    cin.ignore();
    cout << "Nhap ten: ";
    getline (cin, y);
    cout << "Nhap so tuoi: ";
    cin >> z;
    sv sv1(x, y, z);
}