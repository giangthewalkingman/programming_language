#include <iostream>
#include <string>
using namespace std;

void evenNum( int k, int n, int* intArr){
    int j=0;
   int* evenNum = new int[k];
   for(int i = 0; i < n; i++){
    if(intArr[i]%2==0){
       evenNum[j++]=intArr[i];
    }
   } 
   for(int i = 0; i < j; i++){
    cout << evenNum[i]<<endl;
   }
   delete [] evenNum;
}

void classify(char x, int c, int n, int* intArr){
    int j=0;
    switch (x)
    {
    case 'p':
    int* classify = new int[c];
    for(int i = 0; i < n; i++){
        if(intArr[i]>0){
        classify[j++]=intArr[i];
        }
    }
    for(int i = 0; i < j;i++){
        cout << classify[i]<<endl;
    }
    delete [] classify;
        break;
    case 'N':
    int* classify = new int[c];
    for(int i = 0; i < n; i++){
        if(intArr[i]<0){
        classify[j++]=intArr[i];
        }
    }
    for(int i = 0; i < j;i++){
        cout << classify[i]<<endl;
    }
    delete [] classify;
    default:
        break;
    }
    
}


int main(){
    int n,k=0,c1=0,c2=0;
    cout << "Nhap so phan tu: ";
    cin >> n;
    int* intArr = new int[n];
    for(int i = 0; i< n; i++){
        cin >> intArr[i];
        if(intArr[i]%2==0){
            k++;
        }
        if(intArr[i]>0){
            c1++;
        }
        if(intArr[i]<0){
            c2++;
        }
    }
    cout << "Cac so chan la: "<<endl;
    evenNum(k,n,intArr);
    cout << "Cac so duong la: "<<endl;
    classify('p',c1,n,intArr);
    cout << "Cac so am la: "<<endl;
    classify('N',c2,n,intArr);
    delete [] intArr;
    //double* evenNum = new double[n];
}