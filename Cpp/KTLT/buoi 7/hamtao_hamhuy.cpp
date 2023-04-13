#include <iostream>
using namespace std;

class Array {
    int n;
    int *data;
    public:
    Array();
    Array(const Array& a);
    ~ Array();
    Array& operator = (const Array& a);
    
};

Array::Array(const Array& a) {
    n = a.n;
    data = new int[n];
    for(int i = 0; i < n; i++){
        data[i] = a.data[i];
    }
}

Array& Array::operator = (const Array& a) {
    //neu n khac a.n, thi xoa vung nho cua data
    if(n != a.n) {
        delete [] data;
        //gan n = a.n
        n = a.n;
        //cho kich thuoc cua mang data ve n
        data = new int[n];
    }
    for (int i = 0; i < n; i++){
        data[i] = a.data[i];
        return *this;
    }
}