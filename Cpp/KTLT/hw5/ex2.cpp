#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class person {
    char name[50];
    int day, month, year;
    char hometown[100];
    public:
    //ham tao tham so mac dinh
    person(){name[50] = {0}; day = 0; month = 0; year = 0; hometown[100] = {0};}
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

class Complex {
    float real,imag;
    public:
    //ham tao tham so mac dinh
    Complex(){real = 0; imag = 0;}
    //ham nhap 2 thanh phan tu ban phim
    void input_numb(){
        float r,i;
        cin >>r;
        cin >>i;
        real = r;
        imag = i;
    }
    //ham gan 2 thanh phan
    void set_numb(float r, float i){
        real = r;
        imag = i;
    }
    //ham gan thanh phan thuc
    void set_real(float r){
        real = r;
    }
    //ham lay thanh phan thuc
    int get_real(){
        return real;
    }
    //ham gan thanh phan ao
    void set_imag(float i){
        imag = i;
    }
    //ham lay thanh phan ao
    int get_imag(){
        return imag;
    }
    //ham hien thi thong tin
    void printf_numb(){
        cout << real<<" + "<<imag<<endl;
    }
    //ham lay ca so thuc va ao
    void get_numb(float &r, float &i){
        r = real;
        i = imag;
    }
};

// int main(){
//     Complex c1, c2, c3;
//     float real_1=0, imag_1=0;
//     cout << "Nhap so phuc 1: ";
//     c1.input_numb(); //ham nhap 2 thanh phan
//     real_1 = c1.get_real(); //ham lay tp thuc
//     imag_1 = c1.get_imag(); //ham lay tp ao
//     //gan so phuc c2
//     c2.set_numb(3.5, 7.5);
//     c2.set_imag(3.5);//gan tp thuc
//     c2.set_real(7.5);//gan tp ao
//     //ham hien thi thong tin
//     c1.printf_numb();
//     c2.printf_numb();
//     //lay so phuc c3
//     float real_3=0, imag_3=0;
//     c3.get_numb(real_3, imag_3);
// }

// int main(){
//     person p1;
//     //Nhap thong tin tu ban phim
//     p1.scan_person();
//     //Hien thi thong tin ra man hinh
//     p1.print_person();
//     person p2;
//     //Ham gan ten
//     p2.set_name("Peter");
//     //Ham gan que quan
//     p2.set_hometown("Bac Lieu");
//     //Ham gan ngay sinh
//     p2.set_dateofbirth(29,2,1995);
//     //hien thi ra mian hinh
//     p2.print_person();

// }

int main(){
    cout <<"Hello World";
}