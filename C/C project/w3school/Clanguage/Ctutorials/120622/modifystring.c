//how to modify a string
#include <stdio.h>
int main(){
    char randString[] = "Hello WOrld";
    randString[7] = 'o';
    //note that we use single quotes
    printf("%s",randString);
    return 0;
}