#include <iostream> // nhúng thư viện chuẩn để sử dụng cout và cin
using namespace std; // khai báo sử dụng namespace std


class Date{
int day, month,year; // khai báo thành viên private là day, month, year
public:
Date(int d=1, int m=1, int y=2010){ // hàm khởi tạo có tham số đầu vào là 1 ngày (mặc định là 1), 1 tháng (mặc định là 1) và 1 năm (mặc định là 2010)
day = d; // gán giá trị tham số đầu vào d cho day
month = m; // gán giá trị tham số đầu vào m cho month
year = y; // gán giá trị tham số đầu vào y cho year
}
friend ostream& operator<<(ostream& os, const Date& d); // khai báo 1 hàm bạn cùng tên là operator <<, có tham số đầu vào là 1 con trỏ đến ostream và 1 con trỏ đến class Date
};
ostream& operator<<(ostream& os, const Date& d){ // thân của hàm operator << trên đây
//câu lệnh này in ra màn hình dòng chữ: "Hiển thị ngày tháng năm:"
os<<"Hiển thị ngày tháng năm: ";
//in ra ngày, tháng, năm là 3 thành viên của class Date
os<<"Ngày: "<<d.day<<"-"<<d.month<<"-"<<d.year<<endl;
return os; // trả về hàm operator <<
}
int main(){
Date d(1,7,2010); // khởi tạo 1 biến để lưu thông tin ngày tháng năm
cout<<d; // in ra d vừa khởi tạo lúc trên
}