#include <iostream>
using namespace std;

void kiemTraTamGiac (int a, int b, int c){
    int x,y,z;
    x=a*a-b*b-c*c;
    y=b*b-a*a-c*c;
    z=c*c-a*a-b*b;
    if(x==0||y==0||z==0){
        cout <<"Tam giac vuong";
    }else if(x<0||y<0||z<0){
        cout <<"Tam giac tu";
    }else {
        cout <<"Tam giac nhon";
    }
    /*
    Giai thich code: dua vao dinh li cos trong tam giac, cos alpha = (a^2-b^2-c^2)/2bc
    Ta thay de thoa man dieu kien tam giac vuong/ tu thi chi can it nhat 1 goc =90 do (goc vuong)/ >90 do(goc tu)
    Khi alpha > 90 do => cos alpha < 0 => bieu thuc (a^2-b^2-c^2)/2bc < 0, ma b*c>0 => a*a-b*b-c*c < 0
    Khi alpha = 90 do => cos alpha = 0 => bieu thuc (a^2-b^2-c^2)/2bc = 0 => a*a-b*b-c*c = 0
    else{tat ca ca truong hop con lai la tam giac nhon}
    */
}

int main(){
    int a,b,c;
    do{
        cout <<"Nhap do dai 3 canh tam giac: "<<endl;
        cin >>a;
        cin >>b;
        cin >>c;
    }while(!((a+b>c)&&(a+c>b)&&(b+c>a)));
    kiemTraTamGiac(a,b,c);
    return 0;
}