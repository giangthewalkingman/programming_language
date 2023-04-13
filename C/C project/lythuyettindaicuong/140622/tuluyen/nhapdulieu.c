#include<stdio.h>
int main(){
    int A[100],i,n,k,max,min;
    do{printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    }
    while(n<10||n>100);
    printf("->mang A[%d]\n",n);
    for(i=0;i<n;i++){
        printf("A[%d] = ",i);
        scanf("%d",&A[i]);
    }
   /* for(i=0;i<n;i++){
        printf("A[%d] = %d\n",i,A[i]); 

    }*/
    //DEM SO PHAN TU TMDK:

    for(i=0;i<n;i++){
        max=A[0];
        if(A[i]>max){
        max=A[i];
        }
        printf("phan tu lon nhat la: %d",A[i]);
    }
    for(i=0;i<n;i++){
        min=A[0];
        if(A[i]<min){
            min=A[i];
        }
        printf("phan tu nho nhat la: %d",A[i]);
    }
}