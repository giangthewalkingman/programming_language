#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <string>
#include "geometric.h"
using namespace std;

class Circle: public Geometric
{
    double radius;
    public:
    Circle();
    //ham tao 1 doi
    Circle(double r);
    //ham tao nhieu doi
    Circle(double r, string c, bool f);
    //ham nhap ban kinh
    double getRadius();
    //ham nhap dien tich
    double getArea();
    void setRadius(double r);
    void printCircle();
};

#endif 