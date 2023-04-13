#include <stdio.h>
int array(){
    int A[10],i,n=10,max;
    int *ptr=A;
    for(i=0;i<n;i++){
        printf("A[%d]= ",i);
        scanf("%d",&A[i]);
    }
    ptr=&max;
    for(i=0;i<n;i++){
        if(max<A[i]){
            max=A[i];
        }
    }
    printf("%d",*ptr);
    return *ptr;
}

int main(){
    array();
    return 0;    
}