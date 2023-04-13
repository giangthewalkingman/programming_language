#include <stdio.h>
int main(){
    double A[101],k;
    int i,n,p=0;
    do{
        printf("Nhap so phan tu cua mang ");
        scanf("%d",&n);
    }
    while(n<10||n>100);
    for(i=0;i<n;i++){
        printf("A[%d] = ",i);
        scanf("%lf",&A[i]);
    }
    printf("nhap so thuc k = ");
    scanf("%d",&k);
    for(i=0;i<n;i++){
        if(A[i]>k) p++;
    }
    printf("so phan tu co gia tri lon hon k la %d",p);
    return 0;
}
