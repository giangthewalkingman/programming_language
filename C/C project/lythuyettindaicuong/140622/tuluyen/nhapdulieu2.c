#include <stdio.h>
int main(){
int A[20][20], n, m, i,j;
printf("Nhap so hang : "); scanf("%d",&n);
printf("Nhap so cot : "); scanf("%d",&m);
printf("\n");
for ( i=0; i < n; i++ )
for(j=0; j < m; j++) {
printf("Nhap phan tu A[%d,%d]: ", i+1,j+1);
scanf("%d", &A[i][j] );
}
printf("\n\n MA TRAN DA NHAP \n\n");
for ( i=0; i < n; i++ ){
for(j=0; j < m; j++)
printf( "%d" ,A[i][j]);
printf("\n");
//van ko hieu print 2 lan co gi khac nhau ma ket qua
//khac nhau vay?
}

}