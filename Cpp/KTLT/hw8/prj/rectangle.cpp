#include <iostream>
#include <string>
#include "rectangle.h"
using namespace std;

Rectangle::Rectangle(): width(0), height(0) {}
Rectangle::Rectangle(double w, double h): width(w), height(h) {}
Rectangle::Rectangle(double w, double h, string c, bool f): width(w), height(h), color(c), filled(f) {}
double Rectangle::getWidth(){
    return width;
}
double Rectangle::getHeight(){
    return height;
}
void Rectangle::setHeight(double h){
    height = h;
}
void Rectangle::setWidth(double w){
    width = w;
}
double Rectangle::getArea(){
    return height*width;
}
double Rectangle::getPerimeter(){
    return height+width;
}