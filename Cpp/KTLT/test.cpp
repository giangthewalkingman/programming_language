#include<iostream>
using namespace std;
#include<math.h>

class A {
    protected:
    int xA = 1;
};

class B: protected A {
    public:
    int randF(){
        return xA + 2;
    }
};

int main()
{
    B b;
    cout << b.randF();
    return 0;
}