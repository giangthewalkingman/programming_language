#include <iostream>
using namespace std;

int main(){
    int n, A[100]; //khai báo số nguyên n>0 và mảng 100 kí tự đại diện cho số chữ số lớn nhất của số đó
    do{
        cin >>n;//nhập n
    }while(n<=0);
    for(int i = 0; i <= 100; i++){
        A[i] = 0; //gán tất cả phần tử mảng = 0
    }
    for(int i=1; i <100; i++){
        A[i] = n%10;
        cout <<A[i]; //gán cứ 1 phần tử mảng sẽ bằng 1 chữ số của n
        n/=10;
    }
    int max = A[0];
    for(int i = 0; i < 100; i++){
        if(A[i]<A[i+1]){
            max = A[i+1];
            cout <<max; //so sánh các phần tử với nhau
        }
    }
    cout <<endl<<"Chu so lon nhat la "<<max;
    return 0;
}

