#include <stdio.h>
int main(){
    int x;
    printf("Nhap vao so tuoi cua ban:");
    scanf("%d", &x);
    if (x<0){
        printf("Error");
        return 0;
    }
    else if(x>60){
        printf("Nguoi gia");
        return 0;
    }
    else if (x>=30 && x<=60){
        printf("Trung nien");
        return 0;
    }
    else if(18<=x && x<=30){
        printf("Vi thanh nien");
        return 0;
    }
    else{
        printf("Tre em");
        return 0;
    }
}