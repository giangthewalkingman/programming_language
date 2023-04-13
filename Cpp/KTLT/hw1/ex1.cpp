#include <iostream>
using namespace std;

int main(){
    cout << "input your number, we will check whether it is a prime or not: ";
    int x;
    cin >> x;
    int count1,count2=0;
    for(count1=2;count1 < x; count1 ++){
        if(x%(count1)==0){
            count2 ++;
        }
    }
    if(count2==0){
        cout << "YES";
    }else {
        cout << "NO";
    }
    return 0;
}