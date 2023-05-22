#include <iostream>
using namespace std;

const int n = 5;

void insertSort(int *&a, int n, int e, int l) {
    int j = 0;
    for(int i = l+1; i < n+1; i++) {
        //int j = 0;
        e = a[i];
        j = i-1;
        while((j>=l)&&(a[j]>e)) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = e; 
    }
}

void selectSort(int *&a, int n) {
    int m;
    for(int i = 0; i < n; i++) {
        m = i;
        for(int j = i+1; j < n+1; j++) {
            if(a[j]<a[m]) {
                m = j;
            }
        }
        if(m!=i) {
            swap(a[i], a[m]);
        }
    }
}

int main() {
    int m;
    int *a = new int[n];
    for(int i = 0; i < n; i++) {
        cout << "Element " << i+1 << ": ";
        cin >> a[i];
    }
    //selectSort(a, n);
    cout << "After select sort: " <<endl;
    for(int i = 0; i < n; i++) {
        cout << "Element " << i+1 << ": " <<a[i] <<endl;
    }
    cout << "Insert Sort, type a number: ";
    int num;
    cin >> num;
    cout << "Choose the position from 0 -> (n-1)";
    int k;
    cin >>k;
    insertSort(a, n, num, k);
    cout << "After insert sort: " <<endl;
    for(int i = 0; i < n; i++) {
        cout << "Element " << i+1 << ": " <<a[i] <<endl;
    }
    return 0;
}