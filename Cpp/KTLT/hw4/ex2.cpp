#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class person {
    char name[50];
    int day, month, year;
    char hometown[100];
    public:
    void scan_person(){
        char n[50], h[100];
        int d,m,y;
        cout <<"Nhap ten"<<endl;
        cin.getline(n,50);
        cout <<"Nhap ngay thang nam sinh"<<endl;
        cin >> d;
        cin >> m;
        cin >> y;
        cin.ignore();
        cout <<"Nhap que"<<endl;
        cin.getline(h,100);
        strcpy(name,n);
        day = d;
        month = m;
        year = y;
        strcpy(hometown,h);
    }
    //ham lay ten //get char thi ko can truyen tham bien
    void get_name(char n[50]){
        strcpy(n,name);
    }
    //ham gan ten
    void set_name(char n[50]){
        strcpy(name,n);
    }
    //ham lay que quan
    void get_hometown(char h[100]){
        strcpy(h,hometown);
    }
    //ham gan que quan
    void set_hometown(char h[100]){
        strcpy(hometown,h);
    }
    //ham lay ngay sinh
    void get_dateofbirth(int &d, int &m, int &y){
        d = day;
        m = month;
        y = year;
    }
    //ham gan ngay sinh
    void set_dateofbirth(int d, int m, int y){
        day = d;
        month = m;
        year = y;
    }
    void print_person(){
        cout <<endl<<name<<endl<<day<<endl<<month<<endl<<year<<endl<<hometown;
    }
};

int main(){
    person p1;
    //Nhap thong tin tu ban phim
    p1.scan_person();
    //Hien thi thong tin ra man hinh
    p1.print_person();
    person p2;
    //Ham gan ten
    p2.set_name("Peter");
    //Ham gan que quan
    p2.set_hometown("Bac Lieu");
    //Ham gan ngay sinh
    p2.set_dateofbirth(29,2,1995);
    //hien thi ra mian hinh
    p2.print_person();

}