#include <iostream>
using namespace std;
// class A {
//     public:
//     int a,b,c;
//     A(int _a = 0, int _b = 0){
//         a = _a;
//         b = _b;
//     }
// };

// int main() {
//     A a1;
//     A a2(1);
//     A a3(1,2);
//     cout <<a1.a<<a1.b<<endl;
//     cout <<a2.a<<a2.b<<endl;
//     cout <<a3.a<<a3.b<<endl;
// }

// class A {
//     int a, b;
//     public:
//     A(const A& a1);
// };

// A::A(const A& a1){
//     a = a1.a;
//     a = a1.b;
// }
// int main(){
//     //A a;
//     int a= 0;
//     A a1(a);
// }

// float func(){
//     float a = 0.5;
//     return a;
// }

// int main(){
//     cout << func();
// }

class A {
    public:
    int a,b;
    A(int _a, int _b):a(_a), b(_b){}

};

int main() {
    A a(1,2);
    A b1;
    b1 = a;
    cout <<b1.a<<b1.b;
} 