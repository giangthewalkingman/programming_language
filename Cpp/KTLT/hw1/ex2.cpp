#include <iostream>
using namespace std;

long long f(long long n){
    long long n_gt=1,i;
    for(i=1;i<=n;i++){
        n_gt*=i;
    }
    return n_gt;
}

int main(){
    cout << "Nhap 2 so nguyen n va k tren 1 duong thang: ";
    long long x,y;
    cin >> x >> y;
    long long s=x-y;
    cout << "kCn = " << f(x)/(f(y)*f(s));
    return 0;
}
// luu y viet mot ham tinh 3 lan