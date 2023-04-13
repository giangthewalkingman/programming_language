#include <stdio.h>
#include <conio.h>
int main(){
    int t;
    printf("nhap so tuoi:");
    scanf("%d",&t);
    if(t<18)
    printf("tre em");
    else
    if(t>=18&&t<65)
    printf("truong thanh");
    else
    if(t>=65)
    printf("nguoi gia");
return 0;
}