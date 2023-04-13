#include <stdio.h>
void vnd(){
    long long x;
    printf("Nhap so tien ($): ");
    scanf("%lld",&x);
    printf("%lld VND",x*20000);
}

void dollar(){
    long long y;
    printf("Nhap so tien (VND): ");
    scanf("%lld",&y);
    printf("%lld $",y/20000);
}
int main(){
    int i;
    printf("VND(1) hay DOLLAR(2): ");
    scanf("%d",&i);
    switch(i){
        case 1:
        dollar();
        break;
        case 2:
        vnd();
        break;
        default:
        printf("ERROR");
        break;
    }
    return 0;
}
//mext