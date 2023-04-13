#include <stdio.h>
int main(){
    int A[10],i,n,Sum=0,B[10];
    printf("Nhap so phan tu mang A: ");
    scanf("%d",&n);
    if(n<=0){
        printf("Error");
        return 0;
    }
    else{
    for(i=0;i<n;i++){
        printf("A[%d] = ",i);
        scanf("%d",&A[i]);
        Sum+=A[i];
    }
    for(i=0;i<n;i++){
        B[n-1-i]=A[i];
    }
    for(i=0;i<n;i++){
        printf("Mang sau khi dao nguoc: \n");
        printf("A[%d] = %d\n",i,B[i]);
    }
    printf("Tong cua phan tu mang A: %d",Sum);
    return 0;
    }
}