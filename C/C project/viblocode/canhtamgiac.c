#include <stdio.h>
#include <math.h>
int main(){
    long long a,b,c;
    do{
        scanf("%lld",&a);
    }while(a<1||a>pow(10,9));
    do{
        scanf("%lld",&b);
    }while(b<1||b>pow(10,9));
    do{
        scanf("%lld",&c);
    }while(c<1||c>pow(10,9));
    if((a+b>c&&c>abs(a-b))&&(a+c>b&&b>abs(a-c))&&(c+b>a&&a>abs(c-b))){
        printf("1");
    }else{
        printf("0");
    }

}