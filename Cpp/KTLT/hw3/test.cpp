#include <iostream>
using namespace std;

int main(){
    int arr[] = {1 , 4 , 5};
    int *p = &arr[0];
    cout <<**p<<endl;
}