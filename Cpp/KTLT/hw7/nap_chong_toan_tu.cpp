#include <iostream>
using namespace std;

class Date{
int day, month,year;
public:
Date(int d=1, int m=1, int y=2010){day = d; month = m; year = y;}
friend ostream& operator<<(ostream& os, const Date& d);
};
ostream& operator<<(ostream& os, const Date& d){
os<<"Hay hien thi ngay thang nam: ";
os<<"Ngay: "<<d.day<<"-"<<d.month<<"-"<<d.year<<endl;
return os;
}
int main(){
Date d(1,7,2010);
cout<<d;
}