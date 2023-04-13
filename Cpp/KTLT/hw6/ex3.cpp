#include <iostream>
using namespace std;

class Polynom {
    int bac=100;
    //double *heso = new double[bac];
    public:
    double *heso = new double[bac];
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
        bac = b;
        cout << "Da thuc mau la: "<<endl;
        for(int i = 0; i <= b; i++) {
            heso[i] = i+1;
            // cout << heso[i] <<"*x^"<<i<<" + ";
            if(i == b) {
                cout << heso[i] <<"*x^"<<i<<endl;
                break;
            }
            cout << heso[i] <<"*x^"<<i<<" + ";
        }
    }
    Polynom(const Polynom& po);
    void setBac(int b) {
        bac = b;
    }
    int getBac() {
        return bac;
    }
    double getHeSo(int i = 0) {
        return *(heso+i);
    }
    ~Polynom() {
        delete [] heso;
    }
};

Polynom::Polynom(const Polynom& po){
    bac = po.bac;
    for(int i = 0; i <= bac; i++) {
        heso[i] = po.heso[i];
    }
}

//Polynom::~Polynom();

int main() {
   // cout << "Hello World"<<endl;
//     Polynom P1;
//    P1.daThucChoTruoc();
   //cout << P1.getBac();
   //cout << P1.getHeSo(0);
   int bac;
   cout << "Nhap so bac cua da thuc 1: ";
   cin >> bac;
   Polynom p1;
   p1.setBac(bac);
   //cout <<p1.getBac();
    cout << "Nhap he so cua da thuc 1: "<<endl;
   for(int i = 0; i <= bac; i++) {
    cin >> p1.heso[i];
   }
   for(int i = 0; i <= bac; i++) {
    if(i == bac) {
                cout << p1.heso[i] <<"*x^"<<i<<endl;
                break;
            }
            cout << p1.heso[i] <<"*x^"<<i<<" + ";
   }
   cout <<endl;
   Polynom p2(p1);
   cout <<"Da thuc 2 co dang: "<<endl;
   for(int i = 0; i <= bac; i++) {
    if(i == bac) {
                cout << p2.heso[i] <<"*x^"<<i<<endl;
                break;
            }
            cout << p2.heso[i] <<"*x^"<<i<<" + ";
   }
   cout <<endl;
   Polynom p3;
   p3.daThucChoTruoc();
//    cout<<p1.getBac();
//    cout<<p2.getBac();
}

//moi lan compile ra 1 ket qua (1) -> solve(1): dinh nghia ham huy
//double nhung return int ? (2)
// terminate called after throwing an instance of 'std::bad_array_new_length'
//   what():  std::bad_array_new_length (3)
//solve(3) -> initialize very first value for bac = 0 -> mac phai loi (1) -> solve: initialize very first value bac = 100 -> ok