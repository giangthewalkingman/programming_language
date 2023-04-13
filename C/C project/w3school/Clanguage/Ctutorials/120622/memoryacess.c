//how to access the memory address of a variable in C
#include <stdio.h>
int main(){
    int randNumber;
    printf("%p",&randNumber);
    //we use "&" to access the memory address of that variable, "%p": pointer
    return 0;
}