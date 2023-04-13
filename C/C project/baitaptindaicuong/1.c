#include <stdio.h>
#include <math.h>
float f(float x);
int main(){
    float a;
    scanf("%f",&a);
    printf("%.2f",f(a));
}
float f(float x){
    float y = 3*pow(x,2)-2*x+5;
    float z = (2*pow(x,2)+1)/x; 
    if(x>=0){
        return y;
    }else return z;
}