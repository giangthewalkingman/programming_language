#include <stdio.h>
#include <math.h>

int main(){
    int i,n;
    double x,s=0;
    scanf("%lf%d",&x,&n);
    if(x<=0||n<=0){
        printf("Error");
    }
    for(i=1;i<=n;i++){
        s=sqrt(x+s);
    }
    printf("%.4lf",s);
    return 0;
}
//chua toi uu