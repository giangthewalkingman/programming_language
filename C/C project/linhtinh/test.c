#include <stdio.h>
int main(){
    int a=1,b=-6,c=8;
    int d=++a%++b*c-a*--b;
    printf("%d",d);
}