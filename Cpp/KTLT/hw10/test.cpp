#include <iostream>
#include <cmath>
using namespace std;

template <class T>
class Array{
    T *data;
    int size;
    public:
    Array(): size(0), data(new T[size]) {}
    Array(int n): size(n), data(new T[size]) {}
    void scanArray();
    void printArray();
    ~Array();
    template <class Compare>
    void find(Compare comp);
};

template <class T>
void Array<T>::scanArray(){
    cout <<"Nhap so phan tu mang: ";
    do{
        cin >> size;
    }while(size<=0);
    data = new T[size];
    for(int i = 0; i < size; i++){
        cout <<"Phan tu "<<i<<": ";
        cin >> data[i];
    }
}

template <class T>
void Array<T>::printArray(){
    cout <<"Cac phan tu do la: "<<endl;
    for(int i = 0; i < size; i++){
        cout <<"Phan tu "<<i<<": ";
        cout <<data[i];
        cout <<endl;
    }
}

template <class T>
Array<T>::~Array(){
    delete [] data;
}

template <class T>
template <class Compare>
void Array<T>::find(Compare comp){
    int mM = data[0];
    for(int i = 0; i < size - 1; i++){
        if(comp(data[i], data[i+1])){
            mM = data[i+1];
        }
    }
    cout << "Gia tri can tim la: " << mM << endl;
}

template <class T>
inline bool findMin(const T &a, const T &b){
    return a > b;
}

template <class T>
inline bool findMax(const T &a, const T &b){
    return a < b;
}

template <class T>
inline bool findMinAbs(const T &a, const T &b){
    return abs(a) > abs(b);
}

template <class T>
inline bool findMaxAbs(const T &a, const T &b){
    return abs(a) < abs(b);
}

int main(){
    Array<int> a1(10);
    a1.scanArray();
    a1.printArray();
    cout << endl << "Tim gia tri lon nhat: " << endl;
    a1.find(&findMax<int>);
    cout << endl << "Tim gia tri nho nhat: " << endl;
    a1.find(&findMin<int>);
    cout << endl << "Tim gia tri co gia tri tuyet doi nho nhat: " << endl;
    a1.find(&findMinAbs<int>);
    Array<double> a2;
    a2.scanArray();
    a2.printArray();
    return 0;
}