#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c, NuaChuVi, DienTich;
    printf("Nhap do dai canh a:");
    scanf("%f\n", &a);
    printf("Nhap do dai canh b:");
    scanf("%f\n", &b);
    printf("Nhap do dai canh c:");
    scanf("%f\n", &c);
    NuaChuVi = (a+b+c)/2;
    DienTich = sqrt(NuaChuVi*(NuaChuVi-a)*(NuaChuVi-b)*(NuaChuVi-c));
    printf("Dien tich cua tam giac la:%.2f", DienTich);
    return 0;
} 
