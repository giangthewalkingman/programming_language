#include <stdio.h>
#include <math.h>
int main(){
    int n,i;
    double x,s=1;
    scanf("%lf%d",&x,&n);
    if(x<0||n<1){
        printf("Error");
        return 0;
    }
    for(i=1;i<=n;i++){
        s+=pow(x,i)/i;
    }
    printf("%.4lf",s);
    return 0;
}
//good