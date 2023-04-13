#include <iostream>
#include "C:\Users\admin\OneDrive - Hanoi University of Science and Technology\Desktop\programing language\Cpp\KTLT\hw8\prj\circle.h"
#include "C:\Users\admin\OneDrive - Hanoi University of Science and Technology\Desktop\programing language\Cpp\KTLT\hw8\prj\geometric.h"

using namespace std;

#define PI 3.14
Circle::Circle(): radius(0) {}
Circle::Circle(double r): radius(r) {}
double Circle::getRadius(){
    return radius;
}
double Circle::getArea(){
    return PI*radius*radius;
}
void Circle::setRadius(double r){
    radius = r;
}
void Circle::printCircle(){
    Geometric::print();
    cout <<"The object is a circle"<<endl;
}

int main(){
    cout <<"Hello World";
}