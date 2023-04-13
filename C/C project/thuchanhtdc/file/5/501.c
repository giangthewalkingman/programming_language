#include <stdio.h>
int main(){
    int A[100],i,n,B[100],Sum=0;
    scanf("%d",&n);
    if(n<=0){
        printf("Error");
        return 0;
    }
    else{
        for(i=0;i<n;i++){
            scanf("%d",&A[i]);
            B[n-1-i]=A[i];
            Sum+=A[i];
        }
        for(i=0;i<n;i++){
            printf("%d ",B[i]);
        }
        printf("\n%d",Sum);
        return 0;
    }
    
}