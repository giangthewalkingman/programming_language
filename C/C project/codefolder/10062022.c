#include <stdio.h>
#include <math.h>
int main(){
    double X,Y,F;
    scanf("%lf",&X);
    scanf("%lf",&Y);
    F=pow(Y,6)+X*pow(Y,5)+pow(X,2)*pow(Y,4)+pow(X*Y,3)+pow(X,4)*pow(Y,2)+pow(X,5)*Y+pow(X,6);
    printf("%lf",F);
    return 0;
}