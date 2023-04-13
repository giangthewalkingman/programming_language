#include <stdio.h>
int main(){
    int x;
    printf("nhap so tuoi cua ban ");
    scanf("%d",&x);
    if(x<0){ 
        printf("ERROR");
        return 0;
    }
    else if(0<=x && x<6){
            printf("tre nho");
        return 0;
        }
    else if(x>=6 && 14<=x){
            printf("tre em");
        return 0;
        }
    else if(14<x && 22<=x){
            printf("vi thanh nien");
        return 0;
        }
    else if(22<x && 35){
            printf("nguoi lon");
        return 0;
        }
    else if(36<=x && x<=60){
            printf("trung nien");
        return 0;
        }
    else{
            printf("nguoi gia");
        return 0;
        }
}