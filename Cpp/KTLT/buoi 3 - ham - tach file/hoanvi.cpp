#include <iostream>
using namespace std;

void hv(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    int x,y;
    cin >> x >> y;
    hv(x,y);
    cout << x << y;

}