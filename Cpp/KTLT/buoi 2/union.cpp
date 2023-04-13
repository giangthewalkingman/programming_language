#include <iostream>
#include <string>
using namespace std;
union test_cpp {
    int u;
    char a[4];
};

int main(){
    test_cpp test; 
    test.u = 0xBCD9911;
    for(int i = 0; i< 4 ; i++){
        cout << test.a[i] << endl;
    }
    return 0;
}