#include <iostream>
using namespace std;

void f(int *a,int n){
    int i;
    int min=*a,max=*a;
    for(i = 0; i < n; i++){
        if(min>*(a+i)){
            min = *(a+i);
        }
        if(max<*(a+i)){
            max = *(a+i);
        }
    }
    cout << "Vay min = " <<min<<endl<< "Vay max = " <<max<<endl;
}

int main(){
    int A[100],n;
    do{
        cout <<"Nhap so phan tu cua mang: ";
        cin >>n;
    }while(n<=0||n>100);
    for(int i = 0; i < n; i ++){
        cout <<"A["<<i<<"] = ";
        cin >>A[i];
    }
    f(A,n);
    return 0;
}