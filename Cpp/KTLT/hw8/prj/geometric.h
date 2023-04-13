#pragma once
#include <iostream>
#include <string>
using namespace std;

//Khai bao lop geometric
class Geometric{
    //mau
    string color;
    //da to mau hay chua
    bool filled;
    public:
    Geometric();//: color = "\0", filled = 0 {}
    Geometric(string c, bool f);//: color = c, filled = f {}
    string getColor();
    void setColor(string c);
    bool isFilled();
    void setFilled(bool f);
    //in doi tuong geometric
    void print();
};

