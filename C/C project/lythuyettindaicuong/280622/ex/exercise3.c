#include <stdio.h>
int array(){
    int A[100],B[100],i,n,*ptr=B;
    do{
        printf("Nhap so phan tu cua mang A(max 100 phan tu): ");
        scanf("%d",&n);
    }while(n<=0||n>100);
    for(i=0;i<n;i++){
        printf("A[%d]= ",i);
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++){
        B[n-1-i]=A[i];
    }
    printf("Mang sau khi sap xep: \n");
    for(i=0;i<n;i++){
        printf("A[%d]= %d \n",i,*(ptr+i));
    }
}
int main(){
    array();
    return 0;
}
