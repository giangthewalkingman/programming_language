#include <iostream>
#include <string>
using namespace std;

//a
void capPHat(int **&a, int m, int n) {
     int S = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            S += a[i][j];
            //cout<<S<<endl;
        }
    }
    cout<<"Vay ket qua la: "<<endl;
    cout<< S;
}

//b
void chanLe(int **&a, int m, int n, char x) {
    int sChan = 0, sLe = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if((i+1)%2 == 0) {
                sChan += a[i][j];
            }
            else {
                sLe += a[i][j];
            }
        }
    }
    if(x == 'c') {
        cout << "Tong chan la: " <<sChan<<endl;
    }
    else if(x == 'l') {
        cout << "Tong le la: " <<sLe<<endl;
    }
}

//c
void minOrMax(int **&a, int m, int n) {
    int* mangMax = new int[m];
    int* mangMin = new int[m];
    for(int i = 0; i < m; i++) {
        mangMax[i] = a[i][0];
        mangMin[i] = a[i][0];
        for(int j = 0; j < n; j++) {
            if(mangMax[i]< a[i][j]) {
                mangMax[i] = a[i][j];
            }
            if(mangMin[i] > a[i][j]){
                mangMin[i] = a[i][j];
            }
        }
    }
    int max = mangMax[0], min  = mangMin[0];
    for(int i = 0; i < n; i++){
        if(max < mangMax[i]) {
            max = mangMax[i];
        }else
        if(min > mangMin[i]) {
            min = mangMin[i];
        }
    }
    cout << max <<"; " <<min;
}

//d
void max(int **&a, int m, int n, int cotThu_c) {
    int max = a[0][cotThu_c];
    for(int i = 0; i < m; i++) {
        if(a[i][cotThu_c] > max){
            max = a[i][cotThu_c];
        }
    }
    cout << max;
}

int main() {
    //mang tinh
    int a[2][2] = {{1,2},{3,4}};
    int **a_p;
    a_p = new int*[2];
    for(int i = 0; i < 2; i++){
        a_p[i] = new int[2];
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            a_p[i][j] = a[i][j];
        }
    }
    //a
    capPHat(a_p,2,2);
    cout << endl;
    //b
    chanLe(a_p, 2, 2, 'c');
    chanLe(a_p, 2, 2, 'l');
    cout << endl;
    //c
    minOrMax(a_p, 2, 2);
    cout << endl;
    //d 
    cout <<"Tim max tren cot thu: ";
    int cc;
    cin>>cc;
    max(a_p, 2, 2, cc-1);
    cout <<endl;
    int x;
    cout <<"Lam tiep?(1:yes)"<<endl;
    cin >>x;
    if(x!=1){
        return 0;
    }
    //mang dong
    int m,n;
    cout <<"Nhap so hang va so cot cua mang: "<<endl;
    cin >>m;
    cin >>n;
    int **a_ptr;
    a_ptr = new int*[m];
    for(int i = 0; i < n; i++) {
        a_ptr[i] = new int[n];
    }
    cout <<"Nhap cac phan tu cua mang: "<<endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a_ptr[i][j];
        }
    }
    char k;
    cout<<"Nhap so cau: "<<endl;
    cin >>k;
    switch (k)
    {
    case 'a':
    capPHat(a_ptr, m, n);
        break;
    
    case 'b':
    chanLe(a_ptr, m, n, 'c');
    chanLe(a_ptr, m, n, 'l');
    break;
    case 'c':
    minOrMax(a_ptr, m, n); 
    break;
    case 'd':
    cout <<"Tim max tren cot thu: ";
    int c;
    cin>>c;
    max(a_ptr, m, n, c-1);
    break;
    default:
        break;
    }
}