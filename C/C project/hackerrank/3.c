#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x,y;
    float z,t;
    scanf("%d%d%f%f",&x,&y,&z,&t);
    int Sint=x+y,Dint=x-y;
    float Sfloat=z+t,Dfloat=z-t;
    printf("%d %d\n%.1f %.1f",Sint,Dint,Sfloat,Dfloat);
    return 0;
}