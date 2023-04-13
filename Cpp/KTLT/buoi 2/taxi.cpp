#include <iostream>
using namespace std;

int main(){
    cout <<"Input the number of kilometers: \n";
    double a;
    int vnd = 0;
    do{cin >> a;}while(a<=0);
    if(a<=1){
        vnd += 15000;
    }else if( a<=30){
        vnd += 15000 + 12000*(a-1);
    }else{
        vnd += 15000 + 12000*28 + 8000*(a-30);
    }
    cout <<"The money you have to pay is: " << vnd <<endl;
    return 0;
}