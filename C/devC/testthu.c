#include <stdio.h>
int main(){
    long x;
    printf("x =");
    scanf("%d",&x);
    if(x>60)
    printf("nguoi gia");
        else if(30<=x<=60) printf("trung nien");
            else if(18<=x<30) printf("vi thanh nien");
                else printf("tre em");
return 0;
}
