#include <stdio.h>
int main(){
    int i,n=5;
    int A[] = {10 , 2, 5, 7, 5};
    int *p1=A;
    for(i=0;i<n;i++){
        printf("%d\n",*(p1++));
    }
}