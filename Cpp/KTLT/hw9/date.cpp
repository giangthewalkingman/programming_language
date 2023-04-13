#include <iostream>
using namespace std;

class Date{
    //a
    int day, month, year;
    //b
    public:
    Date(): day(0), month(0), year(0) {}
    //c
    friend istream& operator>>(istream& is, Date& d);
    friend ostream& operator<<(ostream& os, const Date& d);
};

//Không truyền const Date& d được vì toán tử nhập cần thay đổi biến đầu vào 
istream& operator>>(istream& is, Date& d){
    cout <<"Nhap ngay: ";
    is>>d.day;
    cout <<"Nhap thang: ";
    is>>d.month;
    cout <<"Nhap nam: ";
    is>>d.year;
    return is;
}   

ostream& operator<<(ostream& os, const Date& d){
    os <<endl <<d.day<<"/"<<d.month<<"/"<<d.year<<endl;
    return os;
}

int main(){
    Date first_day;
    cin >> first_day;
    cout << first_day;
    //cout <<"Hello World";
    return 0;
}