#include <iostream>
using namespace std;

void tong_hieu(double &t,double &h, double x, double y){
    t = x + y;
    h = x - y;
}

int main(){
    double a,b,k,j;
    cin >> a >> b;
    tong_hieu(k,j,a,b);
    cout << k << j;
}
