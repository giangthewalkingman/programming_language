#include <stdio.h>
#define MAX 100
int main(){
    int A[MAX],n;
    int *ptr = A;
    printf("Nhap so phan tu cua mang:");
    scanf("%d",&n);
    printf("Nhap cac phan tu cua mang:");
    for(int i = 0; i < n; i++){
        scanf("%d",&A[i]);
    }
    printf("\nday ki tu dang con tro");
    for(int i = 0; i < n; i++){
        printf("%d\t",*(ptr+i));
    }
    return 0;
}