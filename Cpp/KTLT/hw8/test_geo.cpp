#include <iostream>
#include "C:\Users\admin\OneDrive - Hanoi University of Science and Technology\Desktop\programing language\Cpp\KTLT\hw8\prj\geometric.h"
using namespace std;

Geometric::Geometric(): color("\0"), filled(false) {}
Geometric::Geometric(string c, bool f): color(c), filled(f) {}
string Geometric::getColor(){
    return color;
}
void Geometric::setColor(string c){
    color = c;
}
bool Geometric::isFilled(){
    return filled;
}
void Geometric::setFilled(bool f){
    filled = f;
}
void Geometric::print(){
    if(filled == true){
        cout <<"This object is filled with " <<color<<endl;
    }else{
        cout <<"This object is not filled with "<<color<<endl;
    }
}

int main(){
    Geometric obj1("Red",0);
    obj1.print();
    cout << "Hello World";
}