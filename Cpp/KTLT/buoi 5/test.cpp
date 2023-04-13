#include <iostream>
using namespace std;
int main(){
    int *p; //khai bao con tro
    p[0] = 1; //???
    new(p);
    p = new int[100]; //ok
    p[0] = 1; //ok




    //con tro co vai tro quan li mang dong, ta cap phat, giai phong
    //vung nho, ko phai cap phat contro


}