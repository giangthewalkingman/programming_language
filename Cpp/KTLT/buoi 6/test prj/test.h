#include <iostream>

class date {
    int day, month, year;
    public:
    void setDate(int d, int m, int year);
    void getDate(int& d, int& m, int& y);
};