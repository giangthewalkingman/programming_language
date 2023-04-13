#include <iostream>
#include <cmath>
using namespace std;
int recurse(int n){
    int S=0;
    for(int i = 1; i < n+1; i++){
        S+=pow(i,2);
    }
    return S;
}

int main(){
    int a;
    cin >> a;
    cout << recurse(a);
}