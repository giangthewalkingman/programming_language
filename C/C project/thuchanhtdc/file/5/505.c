#include <stdio.h>
int main(){
    int A[10],i,n,max,B[10];
    scanf("%d",&n);
    if(n>=2&&n<=10){
        for(i=0;i<n;i++){
            scanf("%d",&A[i]);
        }
        for(i=0;i<n-1;i++)
        B[i] = A[i] + A[i+1];
        }
        max=B[0];
        for(i=0;i<n;i++){
            if(max<B[i]){
                max = B[i];
            }
        }
        printf("%d",max);
        return 0;
        if(max<0){
            max = 0;
            printf("%d",max);
            return 0;
        }
        
    if(n==1){
        max = 0;
        printf("%d",max);
        return 0;
    }
}//bad 4/10