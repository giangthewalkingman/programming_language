#include <stdio.h>
int main(){
    int A[100],i,n,count1,count2;
    double TBC_am=0,T_duong=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        if(A[i]<0)
        {
            TBC_am+=A[i];
            count1++;
        }
        if(A[i]>0)
        {
            T_duong+=A[i];
            count2++;
        }
    }
    if(count1==0)
    {
        printf("Mang khong co so am %lf",T_duong);
    }
    else
    if(count2==0)
    { printf("%lf ",TBC_am/count1);
        printf("Mang khong co so duong");
    }
    else
    {
        printf("%lf %lf",TBC_am/count1,T_duong);
    }
}