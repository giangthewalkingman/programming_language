#include <iostream>
#include <string>
using namespace std;

class date {
    int month, date, year;
    get(int &m, int &d, int &y);
    set(int m, int d, int y);
}

date::get(int &m, int &d, int &y){
    m = month;
    d = day;
    y = year;
}

date::set(int m, int d, int y){
    month = m;
    day = d;
    year = y;
}

class people {
    char ten[50];
    //int ngay, thang, nam;
    char que[100];
    int *date_p;
    date_p = date;
    people(){
        cin >>ten;
        cin >> thang>> nam;

    }

}