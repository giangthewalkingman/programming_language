#include <iostream>
using namespace std;

class Array{
    int size;
    int *data;
    public:
    Array(int s = 0): size(s), data(new int[s]) {}
    // Array operator[](const& idx) const {
    //     Array data;
    //     return data[idx];
    // }//ko dung duoc vi tra ve data[i] co kieu int se tien cho su dung hon
    ~Array(){
        delete[] data;
    }
    int& operator[](int idx){//tim hieu xem tai sao lai dung "&"?
        return data[idx];
    }
    Array operator=(const Array& array) {
        if(this != &array){
            delete[] data;
            size = array.size;
            data = new int[size];
            for(int i = 0; i < size; i++){
                data[i] = array.data[i];
            }
        }
        return *this;
    }
    friend istream& operator>>(istream& is, const Array& a);
    friend ostream& operator<<(ostream& os, const Array& a);
};

istream& operator>>(istream& is, const Array& a){
    cout<<"Enter array elements: "<<endl;
    for(int i = 0; i < a.size; i++){
        cout<<"Element "<<i<<": ";
        is>>a.data[i];
    }
    // cout <<"Enter element"<<a.data[]
    return is;
}

ostream& operator<<(ostream& os, const Array& a){
    os<<"Those elements are: "<<endl;
    for(int i = 0; i < a.size; i++){
        os<<"Element "<<i<<": ";
        os<<a.data[i];
        os<<endl;
    }
    return os; 
}

int main(){
    Array arr1(10);
    cin >>arr1;
    cout <<arr1;
}