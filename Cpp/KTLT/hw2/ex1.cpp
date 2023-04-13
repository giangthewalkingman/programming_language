#include <iostream>
using namespace std;
#include <cmath>

double Polynom(double * heso, int n, double x);

int main(){
    double hs[100];
    int n;
    double x;
    do{cout << "Nhap bac cua da thuc: ";
    cin >> n;}while(n<=0||n>100);
    cout << "Nhap cac he so: " << endl;
    for(int i = 0; i <= n; i++){
        cout <<"x^"<<i<<" = ";
        cin >> hs[i];
    }
    cout << "Nhap gia tri cua x:";
    cin >> x;
    cout << "Vay f(x) = " << Polynom(hs,n,x);
    return 0; 
}

double Polynom(double * heso, int n, double x){
    int k = 0;
    for(int i = 0; i <= n; i++){
        k += (*heso++)*pow(x,i);
    }
    return k;
}