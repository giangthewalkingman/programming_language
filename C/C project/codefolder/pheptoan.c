#include <stdio.h>
#include <conio.h>
int main(){
    int a,b, max;
    printf("hien thi gia tri a = ");
    scanf("%d",&a);
    printf("hien thi gia tri b = ");
    scanf("%d",&b);
    if(a>b)
    max = a;
    else
    max = b;
    printf("max = %d",max);
    return 0;
}