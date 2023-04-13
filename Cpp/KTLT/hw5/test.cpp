#include <iostream>
using namespace std;

class Array{
    int x;
    public:
    void scan(){
        cin >>x;
        cout <<x;
    }
};

int main(){
    Array a;
    a.scan();
    return 0;
}