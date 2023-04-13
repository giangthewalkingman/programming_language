#include <iostream>
using namespace std;

class Polynom {
    int bac;
    double *heso = new double[bac + 1];
    public:
    Polynom(int b = 0) {
        bac = b;
        for(int i = 0; i <= b; i++) {
            heso[i] = 0.0;
            if(i==b){
                heso[i] = 1.0;
            }
        }
    }
    void daThucChoTruoc(int b = 5) {
        cout << "Da thuc do la: "<<endl;
        for(int i = 0; i <= b; i++) {
            heso[i] = i+1;
            cout << heso[i] <<"*x^"<<i<<" + ";
            if(heso[i] == b) {
                cout << heso[i] <<"*x^"<<i<<endl;
            }
        }
    }
    //~Polynom();  
};

//Polynom::~Polynom();

int main() {
    cout << "Hello World"<<endl;
    Polynom P1;
    P1.daThucChoTruoc();
}
