#include <stdio.h>
#include <math.h>
int main(){
    int i,n,k;
    double a[101],v;
    do{
        printf("So phan tu cua mang a[] la = ");
        scanf("%d",&n);
    }
	while(n<10||n>100);
    for (i=0;i<n;i++){
        printf("\na[%d] = ",i);
        scanf("%lf",&a[i]);
    }
    do{
        printf("\nNhap vi tri chen k = ");scanf("%d",&k);
    }
	while(k<0||k>n);
    printf("\nNhap gia tri v = ");scanf("%lf",&v);
    for ( i=n;i>k-1;i--){
        a[i]=a[i-1];
    }
    a[k-1]=v;
    n++;
    printf("Mang sau khi chen phan tu v = ");
    for (i=0;i<n;i++){
        printf("%lf ",a[i]);
    }
    do{
        printf("\nNhap vi tri xoa k = ");
        scanf("%d",&k);
    }
	while(k<0||k>n);
    for ( i=k-1;i<n+1;i++){
        a[i]=a[i+1];
    }
    n--;
    printf("\nMang sau khi xoa phan tu ");
    for ( i=0;i<n;i++){
        printf("%lf ",a[i]);
    }
    return 0;
}
