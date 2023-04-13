#define PI 3.14

#include <iostream>
#include "circle.h"
#include <string>
using namespace std;

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

