#include <stdio.h>
int main(){
    double A[100];
    int i,n,k,p;
    do{
        printf("input the number of A[] elements: ");
        scanf("%d",&n);
    }while(n<10||n>100);

    for(i=0;i<n;i++){
        printf("A[%d]=",i);
        scanf("%lf",&A[i]);
    }

    printf("find the A[k] element, k=");
    scanf("%d",&k);
   /* for(i=0;i<n;i++){
        if(i==k)
        printf("%lf",A[i]);
    }>>>>>c1*/
    /*for(i=0;i<n;i++){
        if(i==k){
            A[i]=A[k];
            printf("%lf",A[k]);
        }
    }>>>>>c2*/
    printf("%lf",A[k]);//c3
}