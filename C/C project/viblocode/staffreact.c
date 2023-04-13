#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int count=0;
    char A[100];
    gets(A);
    fflush(stdin);
    for(int i = 0;i < strlen(A);i++){
        if(A[i] == ':'&&A[i+1] == ')'&&A[i+2] == ')'){
            count+= 4;
            i+=2;
        }
        if(A[i] == ':'&&A[i+1] == ')'&&A[i+2] != ')'){
            count+= 2;
            i+=1;
        }
        if(A[i] == ':'&&A[i+1] == '('&&A[i+2] != '('){
            count+= -1;
            i+=1;
        }
        if(A[i] == ':'&&A[i+1] == '('&&A[i+2] == '('){
            count+= -5;
            i+=2;
        }
    }
    fflush(stdout);
    printf("%d",count);
    return 0;
}