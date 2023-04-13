#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <string>
#include "geometric.h"
using namespace std;

class Rectangle: public Geometric
{
    //chieu rong
    double width;
    //chieu cao
    double height;
    public:
    //ham tao ko doi
    Rectangle();
    //ham tao 2 doi
    Rectangle(double w, double h);
    //ham tao 4 doi
    Rectangle(double w, double h, string c, bool f);
    //lay chieu rong
    double getWidth();
    //lay chieu cao
    double getHeight();
    //gan chieu cao
    void setHeight(double h);
    //gan chieu rong
    void setWidth(double w);
    //lay dien tich HCN
    double getArea();
    //lay chu vi HCN
    double getPerimeter();
};

#endif