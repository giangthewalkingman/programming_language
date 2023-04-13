#include <stdio.h>
int main(){
    char string1[100];
    gets(string1);
    fflush(stdin);
    fflush(stdout);
    printf("chuoi vua nhap: %s",string1);
    return 0;
}