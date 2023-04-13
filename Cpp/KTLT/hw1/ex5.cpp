#include <iostream>
using namespace std;

int main(){
    int n;
    long long A[1000];
    do
    {cout << "Input N first numbers of Fibonacci sequence: ";
    cin >> n;}while(n<=0);
    A[0] = 1, A[1] = 1;
    for(int i=2;i<n;i++){
        A[i] = A[i-1] + A[i-2];
    }
    for(int i=0;i<n;i++){
        cout<< A[i] << "\t";
    }
    return 0;
}