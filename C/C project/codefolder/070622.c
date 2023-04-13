#include <stdio.h>
#include <math.h>
int main() {
    float x,fx;
    for (x=-10; x<=-5.0; x+=0.1){
        if(x==0)
        fx=0.0;
        else
        fx= pow(x,5)+x/fabs(x)*pow(fabs(x), 0.2);
        printf("<%4.1f,%7.2f>\n",x,fx);

    }
}