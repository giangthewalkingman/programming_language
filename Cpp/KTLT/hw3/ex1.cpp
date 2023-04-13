#include <iostream>
using namespace std;

void ketHopMang(int* mangDauVao1, int* mangDauVao2, int*& mangDauRa, int n){
    mangDauRa = new int[n];
    for(int i = 0; i < n; i++){
        mangDauRa[i] = mangDauVao1[i] + mangDauVao2[i];
    }
}

int main(){
    int n;
    cout << "Nhap so phan tu mang: ";
    cin >> n;
    int* a1 = new int[n];
    int* a2 = new int[n]; 
    cout << "Nhap cac gia tri cua phan tu mang 1"<<endl;
    for(int i = 0; i < n; i++){
        cout << "a1["<<i<<"] = ";
        cin >> a1[i];
    }
    cout << "Nhap cac gia tri cua phan tu mang 2"<<endl;
    for(int i = 0; i < n; i++){
        cout << "a2["<<i<<"] = ";
        cin >> a2[i];
    }
    int* mangKQ_ptr;
    ketHopMang(a1, a2, mangKQ_ptr,  n);
    cout <<"Cac phan tu mang 3 la:"<<endl;
    for(int i = 0; i < n; i++){
        cout <<"a3["<<i<<"] = "<< *(mangKQ_ptr + i) <<endl;
    }
    delete [] a1,a2;
}

//dau ra phai la tham chieu