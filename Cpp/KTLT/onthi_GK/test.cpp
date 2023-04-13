#include <iostream>
using namespace std;

int main() {
    int x;
    x = 0x55;
    const int n = 4;
    for(int i = 0; i < n; i ++) {
        cout << (x&1)?'o':'-';
    }
}