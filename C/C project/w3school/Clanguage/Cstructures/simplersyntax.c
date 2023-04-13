#include <stdio.h>
#include <string.h>
typedef struct {
    int mynumber;
    float yournumber;
    char myletter;
    char mystring[100];
} mystruct;
int main(){
    mystruct struct_01 = { 2, 4.6, 'o', "Not sure where to begin huh?"}, struct_02;
    strcpy(struct_01.mystring, "ERROR");
    printf("int %d\nfloat %.1f\nchar %c\nchar %s",struct_01.mynumber,struct_01.yournumber,struct_01.myletter,struct_01.mystring);
    //u can copy the struct
    struct_01 = struct_02;
    return 0;
}