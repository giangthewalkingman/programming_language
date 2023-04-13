#include <iostream>
using namespace std;

int x = 5;
int main(){
    ::x ++;
    int *p;
    int x = 5;
    p = &x;
    x++;
    cout << p;
}