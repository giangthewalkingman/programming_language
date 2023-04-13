#include <stdio.h>
#include <math.h>
int main(){
    long long a, b, c;
    scanf("%ld", &a);
    scanf("%ld", &b);
    scanf("%ld", &c);
    if (1>a && a>pow(10, 9) || 1>b && b>pow(10, 9) || 1>c && c>pow(10, 9)){
        printf("Invalid Input Occured");
        return 0;
    }
    else{
        if (a+b>c || a+c>b || b+c>a){
            printf("1");
        }
        else{
            printf("0");
        }
    }
}