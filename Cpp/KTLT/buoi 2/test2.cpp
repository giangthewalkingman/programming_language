#include <iostream>
#include <stdio.h>
using namespace std; //- this won't let you include "std::" to be the prefix of each cin/cout
//learn how to debug
int main(){
   // int n,m;
    //std::cin>>n>>m;
    //std::cout<<"Hello\n";
    //std::cout<<n;
    int x = 5, y = 2;
    int z = x&y;
    cout <<z;
    
}
/* logic bit:
XOR: giong nhau bang 0, khac nhau = 1
int x=5; y=2 -> x&y = ?
x = 0101 , y = 0010
x&y = 0111 -> x&y = 7

bien cuc bo, tham bien nam trong ngan xep
*/