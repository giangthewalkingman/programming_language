#include <stdio.h>
#include <math.h>
int main(){
    int T,A[10000][3];
    do{
        //printf("Nhap so test cases: ");
        scanf("%d",&T);
    }while(T<1||T>pow(10,4));
    for(int i=0;i<T;i++){
        //printf("3 so a,b,c la: ");
        do{scanf("%d%d%d",&A[i][0],&A[i][1],&A[i][2]);}while(-pow(10,6)>A[i][0]&&A[i][0]<pow(10,6)||-pow(10,6)>A[i][1]&&A[i][1]<pow(10,6)||-pow(10,6)>A[i][2]&&A[i][2]<pow(10,6));
    }

    int B[10000][9],min[10000];
    for(int i=0;i<T;i++){
        B[i][0] = abs(A[i][0]*A[i][1]-A[i][2]);
        B[i][1] = abs(A[i][0]*A[i][1]+A[i][2]);
        B[i][2] = abs(A[i][0]*A[i][1]*A[i][2]);
        B[i][3] = abs(A[i][0]+A[i][1]*A[i][2]);
        B[i][4] = abs(A[i][0]+A[i][1]-A[i][2]);
        B[i][5] = abs(A[i][0]+A[i][1]+A[i][2]);
        B[i][6] = abs(A[i][0]-A[i][1]*A[i][2]);
        B[i][7] = abs(A[i][0]-A[i][1]+A[i][2]);
        B[i][8] = abs(A[i][0]-A[i][1]-A[i][2]);
        min[i] = B[i][0];
        for(int j=1;j<9;j++){
            if(min[i]>B[i][j]){
                min[i]=B[i][j];
            }
        }
    }
    //printf("Cac gia tri nho nhat duoc tinh la:\n");
    for(int i=0;i<T;i++){
        printf("%d\n",min[i]);
    }
    return 0;
}