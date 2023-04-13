#include <iostream>
using namespace std;

class Array{
    //kich thuoc cua array
    int size;
    //con tro array
    int *array;
    public:
    //khai bao ham tao, ham huy, ham tao ban sao
    Array(int n = 0, int d = 0);
    ~Array();
    Array(const Array &a);
    //ham nhap du lieu va hien thi du lieu ra man hinh
    void scan_array();
    void print_array();
    void set_element();
    void get_element(int* main_arr, int n);
};

//dinh nghia ham tao, ham huy, ham tao ban sao
Array::Array(int n, int d){
    size = n;
    array = new int[n];
    for(int i = 0; i < n; i++){
        array[i] = d;
    }
}
Array::~Array(){
    delete [] array;
}
Array::Array(const Array &a){
    size = a.size;
    array = new int[a.size];
    for(int i = 0; i < size; i++){
        array[i] = a.array[i];
    }
}

//dinh nghia ham nhap va ham xuat
void Array::scan_array(){
    cout << "How many elements?"<<endl;
    cin >> size;
    array = new int[size];
    cout << "Enter elements of the array"<<endl;
    for(int i = 0; i < size; i++){
        cout <<"Element "<<i<<": ";
        cin >>array[i];
    }
}
void Array::print_array(){
    cout << "Elements of the array: "<<endl;
    for(int i = 0; i < size; i++){
        cout <<"Element "<<i<<": ";
        cout << array[i] <<endl;
    }
}

//dinh nghia ham gan du lieu
void Array::set_element(){
    int k_element = 0, value = 0;
    cout << "Enter the element you want to modify: ";
    cin >> k_element;
    cout << "Enter the value: ";
    cin >> value;
    array[k_element] = value;
}
//dinh nghia ham lay du lieu (truyen vao 1 array tu ham main va lay du lieu tu array cua class)
void Array::get_element(int* main_arr, int n){
    for(int i = 0; i < size; i++){
        main_arr[i] = array[i];
    }
}

//ham hien thi main array

int main(){
    Array arr1;
    arr1.scan_array();
    arr1.print_array();
    arr1.set_element();
    arr1.print_array();
    int main_arr[100], n;
    do{
        cout <<"Enter the number of main array elements: ";
        cin >>n;
    }while(n<=0);
    cout <<"Enter elements:"<<endl;
    for(int i = 0; i < n; i++){
        cout <<"Element "<<i<<": ";
        cin >> main_arr[i];
    }
    arr1.get_element(main_arr, n);
    //hien thi elements cua main array sau khi thay doi
    cout <<"Main array elements after being changed:"<<endl;
    for(int i = 0; i < n; i++){
        cout <<"Element "<<i<<": "<<main_arr[i]<<endl;
    }
    //dung ham tao ban sao
    Array arr2(arr1);
    //hien thi mang 2 cua class ra man hinh
    cout <<"The second class array is: "<<endl;
    arr2.print_array();

    return 0;
}
