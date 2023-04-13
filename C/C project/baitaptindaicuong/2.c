#include <stdio.h>
#include <math.h>
double F(double x);
int main(){
    double Q[100],Y[100];
    int i,k;
    do{
        printf("Nhap so phan tu mang Q ");
        scanf("%d",&k);
    }while(k<5||k>100);
    printf("Nhap cac phan tu mang Q \n");
    for(i=0;i<k;i++){
        printf("Q[%d] = ",i);
        scanf("%lf",&Q[i]);
    }
    int count1=0;
    for(i=0;i<k;i++){
        printf("F(Q[%d]) = %lf\n",i,F(Q[i]));
        if(F(Q[i])>=0){
            ++count1;
        }
    }
    int count2=0;
    for(i=0;i<count1;i++){
        if(F(Q[i])>=0){
            Y[i] = F(Q[i]);
        }
        if(Y[i]>10&&Y[i]<100){
            ++count2;
        }
    }
    printf("So luong cac phan tu cua mang Y nam trong khoang (10,100) la: %d", count2);
}
double F(double x){
    double y = -pow(x,30) + cos(0.25*x) - 5;
    double z = log(x*x + 1) + x;//log10(in C)=log(in Math), log(in C) = ln(in Math)
    double t = 9 + x;
    if(x<10){
        return y;
    }else if(10<=x&&x<=20){
        return z;
    }else return t;
}