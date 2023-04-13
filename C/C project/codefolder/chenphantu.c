#include <stdio.h>
int main(){
    double A[100],a;
    int i,n,k;
    do{
        printf("Nhap so phan tu cua A: ");
        scanf("%d",&n);
    }while(n<10||n>100);
    for(i=0;i<n;i++){
        printf("A[%d]=",i);
        scanf("%lf",&A[i]);
    }
    printf("nhap vi tri k can chen:");
    scanf("%d",&k);
    printf("nhap gia tri muon chen");
    scanf("%lf",a);
    for(i=n;i>k-1;i--){
        A[i]=A[i-1];
        A[k]=a;
        n++;
    }
    printf("mang A sau khi chen:\n");
    for(i=0;i<n;i++){
        printf("A[%d]=%lf\n",i,A[i]);
    }
}