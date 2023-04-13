#include <stdio.h>
int twoSum( int numsSize, int target, int* returnSize){
    int a[100], i;
    int j;
    int *nums = a;
    scanf("%d",&numsSize);
    for(i=0;i<numsSize;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&target);
    for(i=0;i<numsSize;i++){
        for(j=0;j<numsSize;j++){
            if(i==j){
                continue;
            }
            else if(a[i] + a[j] == target){
                printf("%d\n%d",a[i],a[j]);
            }
        }
    }
}
int main(){
    twoSum();
}

