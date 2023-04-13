#include <iostream>
using namespace std;

class Array{
    int n;
    int *data;
    public:
    //friend ostream& operator[](ostream& os, const Array& d);
    //dinh nghia toan tu truy nhap chi so de ko phai dung .data[i]
    int operator[](int index) {
        return data[index];
    }
    Array operator+(const Array &arr) //overload toan tu +
    {
        Array kq;
        for(int i = 0; i < arr.n; i++) {
            kq.data[i] = this->data[i] + arr.data[i];
        }
        return kq;
    }
    // friend istream& operator>>(istream& is, Array& arr) {
    //     cout << "Hay nhap ...";
    //     for(int i = 0; i < arr.n; i++){
    //         is>>arr.data[i];
    //     }
    //     return is;
    // };

    // int operator()(){
    //     int max = data[0];
    //     for(int i = 1; i < n; i++) {
    //         if(max<data[i]){
    //             max  = data[i];
    //         }
    //     }
    //     return max;
    // }

    Array(int _n = 0, int _d = 0) {
        n = _n;
    data = new int[n];
    for(int i = 0; i < n; i++) {
        data[i] = _d;
        }
    }
    ~Array();
};

//ostream& operator[]

// Array::Array(int _n, int _d) {
//     n = _n;
//     data = new int[n];
//     for(int i = 0; i < n; i++) {
//         data[i] = _d;
//     }
// }

Array::~Array() {
    delete [] data;
}

int main() {
    Array arr1(5,1);
    int n;
    // cout << "Nhap so phan tu cua mang 1: ";
    // cin >> n;
    // for(int i = 0; i < n; i++) {
    //     cout <<"Phan tu "<<i<<":";
    //     cout << arr1[i];
    // }
    Array arr2(5,2);
    Array arr3 = arr1 + arr2;
    cout << arr3[1];
}


//tim hieu them ve vao ra file