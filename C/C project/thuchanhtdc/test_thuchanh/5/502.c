#include <stdio.h>
int main(){
    int A[100],i,n,m=0,k=0,T_soduong=0;
    double TBC_soam=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
        if(A[i]<0){
            (TBC_soam)+=A[i];
        }
        if(A[i]>0){
            T_soduong+=A[i];
        }
    }
    for(i=0;i<n;i++){
        if(A[i]<0){m++;}
        if(A[i]>0){k++;}
    }
    if(k==0){
        printf("TBC so am = %lf\nMang khong co so duong",TBC_soam/n);
    }
    if(m==0){
        printf("Tong so duong = %d\nMang khong co so am",T_soduong);
    }
    if(m!=0&&k!=0){
    printf("TBC so am = %lf\nTong so duong = %d",TBC_soam/n,T_soduong);
    return 0;
    }
}