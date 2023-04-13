//since string are actually arrays in C, u can access its index numbers. Watch!
#include <stdio.h>
int main(){
    char randString[] = "Hello World";
    printf("%c",randString[5]);
    return 0;
    //note that we have to use %c format specifier to print a single character.
}  