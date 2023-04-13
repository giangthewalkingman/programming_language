#include "test.h"
#include <iostream>
using namespace std;

void date::getDate(int& d, int& m, int&y) {
    d = day;
    m = month;
    y = year;
}

void date::setDate(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
}

int main(){
    date d;
    d.setDate(1, 1, 2022);
    int _d, _m, _y;
    d.getDate(_d, _m, _y);
    cout << _d<<_m<<_y;
    return 0;
}


