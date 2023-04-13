#include <iostream>
using namespace std;

int main(){
    int x = 5;
    int &r = x;
    cout << x <<"va" << r <<endl;
    r++;
    r=r+1;
    cout << x <<"va" << r <<endl;
}