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
        //cout << mssv << ten << tuoi;
    }
};

int main(){
    sv sv1("20213701", "Nguyen Truong Giang", 19 );
}