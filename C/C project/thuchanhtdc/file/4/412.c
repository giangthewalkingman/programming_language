#include <stdio.h>
#include <math.h>
int main(){
    int i,n,p=1;
    double x,s=1;
    scanf("%lf%d",&x,&n);
    if(n<1||x<0){
        printf("Error");
        return 0;
    }
    for(i=1;i<=n;i++){
        p*=i;
        s+=pow(-1,i)*pow(x,i)/(p);
    }
    printf("%.4lf",s);
    return 0;
}
//good