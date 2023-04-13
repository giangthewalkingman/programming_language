#include <iostream>
#include <string>
#include <cstring>
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


class Person: public Date{
    //a
    Date dateOfBirth;
    string id, name, home;
    public:
    //b
    Person(): id("\0"), name("\0"), home("\0") {}
    Person(string i, string n, string h): id(i), name(n), home(h) {}
    //ham nhap info
    void scanPerson(Person &p);
    //ham in info
    void printPerson(Person &p);
};

//c
void Person::scanPerson(Person &p){
    //cin.ignore();
    cout <<"Nhap ten: ";
    getline(cin, p.name);
    //cin.ignore();
    cout <<"Nhap so CCCD: ";
    getline(cin, p.id);
    cout <<"Nhap que quan: ";
    getline(cin, home);
    cout <<"Nhap ngay thang nam sinh: "<<endl;
    cin >>p.dateOfBirth;
    //cin.ignore();    
}

//d
void Person::printPerson(Person &p){
    cout <<"_________________________________________________________________________"<<endl<<"Ten: "<<p.name<<endl;
    cout <<"Ma so CCCD: "<<p.id<<endl;
    cout <<"Que quan: "<<p.home<<endl;
    cout <<"Ngay thang nam sinh: "<<endl;
    cout <<p.dateOfBirth<<endl;
}

int main(){
    Person p1;
    //Nhap thong tin
    p1.scanPerson(p1);
    //cin>>p1;
    //cout <<"Hello World";
    p1.printPerson(p1);
}