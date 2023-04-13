#include <stdio.h>

void bai_1(){
        int A[99],i,n,s=0,m=0;
        long long p=1;
    do{
        printf("Cho mang A gom cac so nguyen\nNhap so phan tu (<100) cua mang A: ");
        scanf("%d",&n);
    }while(n<=0||n>=100);
    for(i=0;i<n;i++){
        printf("A[%d]= ",i);
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++){
        s+=A[i];
    }
    for(i=0;i<n;i++){
        p*=A[i];
    }
    printf("Tong day so la: %d\nTich day so la: %lld\n",s,p);
    printf("Cac so chia het cho 3 va lon hon 10 la: \n");
    for(i=0;i<n;i++){
        if(A[i]%3==0&&A[i]>10){
            printf("%d\n",A[i]);
        }
    }
    for(i=0;i<n;i++){
        if(A[i]>=100&&A[i]<1000){
            m++;
        }
    }
    printf("Doan [100,1000) co %d so",m);
}

void bai_2(){
    int B[100],i2,n2;
    do{
        printf("Cho mang B gom cac so nguyen\nNhap so phan tu(<=100) cua B: ");
        scanf("%d",&n2);
    }while(n2<=0||n2>100);
    for(i2=0;i2<n2;i2++){
        printf("B[%d]= ",i2);
        scanf("%d",&B[i2]);
        if(B[i2]%2!=0){
                B[i2]=NULL;
        }
    }
    int minC=B[0];
    for(i2=0;i2<n2;i2++){
        if(B[i2]<minC){
            minC=B[i2];
        }
    }
    printf("so chan nho nhat cua day la %d",minC);
}
    
void bai_3(){
    double x[100];
    int i3,n3,m3=0;
    do{
        printf("Nhap so phan tu (3<=so phan tu<=100) cua mang x[100]: ");
        scanf("%d",&n3);
    }while(n3<=2||n3>100);
    for(i3=0;i3<n3;i3++){
        printf("x[%d]= ",i3);
        scanf("%lf",&x[i3]);
    }
    for(i3=0;i3<n3;i3++){
        if(x[i3+1] == (x[i3]+x[i3+2])/2){
            m3++;
        }
    }
    printf("so bo ba so thoa man dieu kien \"x[i] = (x[i-1]+x[i+1]) / 2\" la %d so ",m3);

}

void bai_4(){
    double D[99];
    int i4,n4;
    do{
        printf("Nhap so phan tu (<100 phan tu): ");
        scanf("%d",&n4); 
    }while(n4<=0||n4>=100);
    for(i4=0;i4<n4;i4++){
        printf("D[%d]= ",i4);
        scanf("%lf",&D[i4]);
    }
    double minD=D[0];
    for(i4=0;i4<n4;i4++){
        if(D[i4]<minD){
            minD=D[i4];
        }
    }
    printf("so be nhat trong day la %lf\n",minD);
    for(i4=0;i4<n4;i4++){
        if(minD=D[i4]){
            printf("vi tri cua cac so co cung gia tri la %d\n",i4);
        }
    }
}

void bai_5(){
    double E[99],a5;
    int i5,n5,k5,tmp,l5;
    do{
        printf("Nhap so phan tu cua mang (<100 phan tu): ");
        scanf("%d",&n5);
    }while(n5<=0||n5>=100);
    for(i5=0;i5<n5;i5++){
        printf("E[%d]= ",i5);
        scanf("%lf",&E[i5]);
    }
    for(i5=0;i5<n5-1;i5++)
    for(k5=i5+1;k5<n5;k5++)
    if(E[i5]>E[k5]){
        tmp=E[i5];
        E[i5]=E[k5];
        E[k5]=tmp;
    }
    printf("mang sau khi sap xep: \n");
    for(i5=0;i5<n5;i5++){
        printf("E[%d]= %lf\n",i5,E[i5]);
    }
    printf("nhap vi tri can chen: ");
    scanf("%d",&l5);
    printf("nhap gia tri can chen: ");
    scanf("%lf",&a5);
    for(i5=n5;i5>l5;i5--){
        E[i5]=E[i5-1];
        E[l5]=a5;
        n5=n5+1;
    }
    printf("mang sau khi chen la: \n");
    for(i5=0;i5<n5;i5++){
        printf("E[%d]= %lf\n",i5,E[i5]);
    }

}




int main(){
    int bai_x;
    printf("XXXXXXX Please ignore \"warning\" lines, okay now do the exercises!! XXXXXXXX\n");
    printf("Hay nhap bai ban muon lam (tu 1 den 5): ");
    scanf("%d",&bai_x);
    switch(bai_x){
        case 1:
        {bai_1();
        break;}
        case 2:
        {bai_2();
        break;}
        case 3:
        {bai_3();
        break;}
        case 4:
        {bai_4();
        break;}
        case 5:
        {bai_5();
        break;}
        default:
        {printf("so bai khong thoa man tu 1 den 5, xin moi nhap lai so bai!");}
    }
    return 0;
}

/*Bài tập tuần 13 21/6/2022
Due June 28, 2022 12:30 AM
Instructions
Bài 1. Nhập vào dãy (<100) số, tính và đưa ra màn hình
Tổng và tích của dãy số
Các số chia hết cho 3 và lớn hơn 10
Đếm các số nằm trong đoạn [100,1000)
Bài 2. Nhập vào một dãy số; tìm số chẵn nhỏ nhất dãy
Bài 3. Nhập dãy số; đếm xem có bao nhiêu bộ 3 số thỏa mãn điều kiện x[i] = (x[i-1]+x[i+1]) / 2
Bài 4. Viết chương trình nhập vào từ bàn phím một dãy số ( < 100 phần tử). Đưa ra số bé nhất và vị trí những số bằng số bé nhất
Bài 5.
b1:Nhập vào một dãy số (<100 phần tử) 
b2:sắp xếp theo thứ tự tăng dần.
b3:Nhập thêm vào một số và chèn số mới nhập vào đúng vị trí
*/