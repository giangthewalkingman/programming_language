#include <stdio.h>
int main(){
    int month;
    printf("which month? ");
    scanf("%d",&month);
    switch (month){
        case 2:
        printf("thang chan");
        break;
        case 1:
        printf("thang le");
        break;
        default:
        printf("ERROR");
    }
    return 0;
}