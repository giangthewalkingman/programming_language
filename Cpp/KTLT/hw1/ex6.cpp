#include <iostream>
using namespace std;
#include <cmath>

int main(){
    int n,count=0;
    unsigned long int A[1000];
    A[0] = 1, A[1] = 1;
    for(int i=2;i<1000;i++){
        A[i] = A[i-1] + A[i-2];
    }
    cout << "Input the interger: ";
    cin >> n;
    for(int i=0;i<1000;i++){
        if(n==A[i]){
            count+=1;
            break;
        };
    }
    if(count!=0){
        cout << "This is a Fibonacci number!";
    }else {
        cout << "This is not a Fibonacci number!";
    }
}