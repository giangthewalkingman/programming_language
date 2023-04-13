#include <stdio.h>
#include <string.h>
int main(){
    int L;
    char RM_string[100];
    int A[100],S=0;
    fflush(stdin);
    printf("Input the Roman numerals: \n");
    gets(RM_string);
    for(int i=0;i<strlen(RM_string);i++){
        if(RM_string[i] == 'I'){
            A[i] = 1;
        }
        if(RM_string[i] == 'V'){
            A[i] = 5;
        }
        if(RM_string[i] == 'X'){
            A[i] = 10;
        }
        if(RM_string[i] == 'L'){
            A[i] = 50;
        }
        if(RM_string[i] == 'C'){
            A[i] = 100;
        }
        if(RM_string[i] == 'D'){
            A[i] = 500;
        }
        if(RM_string[i] == 'M'){
            A[i] = 1000;
        }
    }
    for(int i=0;i<strlen(RM_string);i++){
        if(A[i]!=1&&A[i]!=5&&A[i]!=10&&A[i]!=50&&A[i]!=100&&A[i]!=500&&A[i]!=1000){
            A[i]=0;
        }
    }
    for(int i=0;i<strlen(RM_string);i++){
        if(A[i]<A[i+1]){
            S-=A[i];
        }
        else{
            S+=A[i];
        }
    }
    fflush(stdout);
    printf("The roman numeral input is: %s\n",RM_string);
    printf("The interger result is: %d",S);
    return 0;
}