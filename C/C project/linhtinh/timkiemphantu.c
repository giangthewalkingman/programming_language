#include <stdio.h>
int main(){
    int i,k,A[100],n;
    printf("\nA co so phan tu nam trong khoang tu 1 den 100\n");
    do{
        printf("A[] co so phan tu la: ");
        scanf("%d",&n);
    }
    while(n<=0||n>100);
    for(i=0;i<n;i++){
        printf("A[%d] = ",i);
        scanf("%d",&A[i]);
    }
    printf("nhap vi tri k = ");
    scanf("%d",&k);
    
}