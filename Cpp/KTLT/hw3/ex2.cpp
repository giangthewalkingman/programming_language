#include <iostream>
using namespace std;

void Reverse (double arr[], const int size, double*& rev) {
    rev = new double[size];
    for(int i = 0; i < size; i++){
        rev[i] = arr[size-1-i];
    }
}

int main() {
    int n;
    cin >> n;
    double* arr = new double[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    double* rev_ptr;
    Reverse (arr, n, rev_ptr);
    for(int i = 0; i < n; i++) {
        cout << rev_ptr[i] <<endl;
    }
    delete [] arr;
}
//mảng tĩnh 