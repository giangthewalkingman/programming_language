#include <stdio.h>
#include <math.h>
int main(){
    int s,n,S=0,i;
    do{
        //printf("Nhap chi so suc manh cua anh chang: ");
        scanf("%d",&s);
    }while(s<1||s>pow(10,4));
    do{
        //printf("Nhap so luong quai vat: ");
        scanf("%d",&n);
    }while(n<1||n>pow(10,3));
    int A[10000][2];
    for(int i = 0;i<n;i++){
        //printf("A[%d][0] va A[%d][1]= ",i,i);
        scanf("%d%d",&A[i][0],&A[i][1]);
    }
    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(s>A[j][0]){
            s+=A[j][1];
            A[j][0]=0;
            A[j][1]=0;
        }
        }
    }
    for(i=0;i<n;i++){
        S+=A[i][0];
    }
    if(S==0){printf("YES");}
    else{printf("NO");}
    return 0;
}