#include <stdio.h>
#include <string.h>
typedef struct {
    int k;
    char myletter[30];
    } str;
int main(){
    str str1; 
    str1.k = 5;
    //str1.myletter = "Hello World"; ->error
    strcpy(str1.myletter, "Hello World");
    printf("%d\n",str1.k);
    printf("%s\n",str1.myletter);
    return 0;
}
