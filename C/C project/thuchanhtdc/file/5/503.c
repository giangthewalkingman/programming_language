#include <stdio.h>
int main(){
    int A[100],i,n,j,tmp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
        if(A[i]>A[j]){
        tmp = A[i];
        A[i] = A[j];
        A[j] = tmp;
        }
    }
    }
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }

}