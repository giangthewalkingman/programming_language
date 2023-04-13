#include <iostream>
using namespace std;

int tong(int a, int b){
    return a+b;
}

int hieu(int a, int b){
    return a-b;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << tong(a,b) << hieu(a,b);
    return 0;
}