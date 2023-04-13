#include <iostream>
#include <string>
#include <cstring>
using namespace std;

#include <iostream>
using namespace std;

//________________________________________________BAI 1_______________________________________________________________________________
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

//_________________________________________________BAI 2_______________________________________________________________________________
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

//_________________________________________________BAI 3_______________________________________________________________________________
//__________________________F0____________________________________________________________________
class F0: public Person{
    Date ngayXN, ngayBDDT, ngayKTDT;
    bool ketQuaDT;
    string benhVienDT;
    public:
    //a
    F0(): ketQuaDT(false), benhVienDT("\0") {}
    F0(bool kqDT, string bvDT): ketQuaDT(kqDT), benhVienDT(bvDT) {}
    //c nhap thong tin F0
    void scanF0(F0 &p);
    //d in thong tin F0
    void printF0(F0 &p);
};

void F0::scanF0(F0 &p){
    Person::scanPerson(p); //ko dung toan tu pham vi co sao khong?
    cout <<"Nhap ngay XN: "<<endl;
    cin >> p.ngayXN;
    cout <<"Nhap ngay bat dau dieu tri: "<<endl;
    cin >> p.ngayBDDT;
    cout <<"Nhap ngay ket thuc dieu tri: "<<endl;
    cin >> p.ngayKTDT;
    cout <<"Nhap ket qua dieu tri:(1: da dieu tri/0: chua dieu tri): "<<endl;
    cin >> p.ketQuaDT;
    cout <<"Nhap ten benh vien dieu tri: "<<endl;
    cin.ignore();
    getline(cin, p.benhVienDT);
}

void F0::printF0(F0 &p){
    Person::printPerson(p); //ko dung toan tu pham vi co sao khong?
    cout <<"Ngay XN: "<< p.ngayXN<<endl;
    cout <<"Ngay bat dau dieu tri"<< p.ngayBDDT<<endl;
    cout <<"Ngay ket thuc dieu tri: "<< p.ngayKTDT<<endl;
    cout <<"Ket qua dieu tri: "<< p.ketQuaDT<<endl;
    cout <<"Ten benh vien dieu tri: "<<p.benhVienDT<<endl;
}

//_____________________________________F1_________________________________________________________________________
class F1: public Person{
    Date ngayXN, ngayBDCL, ngayKTCL;
    bool ketQuaXN;
    string diaDiemCL;
    public:
    //b
    F1(): ketQuaXN(false), diaDiemCL("\0") {}
    F1(bool kqXN, string ddCL): ketQuaXN(kqXN), diaDiemCL(ddCL) {}
    //e nhap thong tin F1
    void scanF1(F1 &p);
    //f in thong tin F1
    void printF1(F1 &p);
    void danhSachF0daTX();
};

void F1::scanF1(F1 &p){
    Person::scanPerson(p); //ko dung toan tu pham vi co sao khong?
    cout <<"Nhap ngay XN: "<<endl;
    cin >> p.ngayXN;
    cout <<"Nhap ngay bat dau cach ly: "<<endl;
    cin >> p.ngayBDCL;
    cout <<"Nhap ngay ket thuc cach ly: "<<endl;
    cin >> p.ngayKTCL;
    cout <<"Nhap ket qua xet nghiem:(1: duong tinh/0: am tinh): "<<endl;
    cin >> p.ketQuaXN;
    cout <<"Nhap ten dia diem cach ly: "<<endl;
    cin.ignore();
    getline(cin, p.diaDiemCL);
}

void F1::printF1(F1 &p){
    Person::printPerson(p); //ko dung toan tu pham vi co sao khong? 
    cout <<"Ngay cach ly: "<< p.ngayXN<<endl;
    cout <<"Ngay bat dau cach ly"<< p.ngayBDCL<<endl;
    cout <<"Ngay ket thuc cach ly: "<< p.ngayKTCL<<endl;
    cout <<"Ket qua cach ly: "<< p.ketQuaXN<<endl;
    cout <<"Ten dia diem cach ly: "<<p.diaDiemCL<<endl;
}

void F1::danhSachF0daTX(){
    int n;
    do{
        cout <<"Nhap so F0 ma F1 nay da tiep xuc: ";
        cin >>n;
    }while(n<=0);
    F0 *ptr_p = new F0[n];
    cin.ignore();//luu y, ko them dong nay thi se ko nhap dc ten
    for(int i = 0; i < n; i++){
        ptr_p[i].scanF0(ptr_p[i]);
    }
    cout <<"=================DANH SACH F0 DA TIEP XUC===================="<<endl;
    for(int i = 0; i < n; i++){
        //in cac F0 da tiep xuc
        ptr_p[i].printF0(ptr_p[i]);
    }
}

int main(){
    F0 p1;
    cout <<"F0: "<<endl;
    p1.scanF0(p1);
    p1.printF0(p1);
    cout <<"F1: "<<endl;
    F1 p2;
    p2.scanF1(p2);
    p2.printF1(p2);
    p2.danhSachF0daTX();
    return 0;
}