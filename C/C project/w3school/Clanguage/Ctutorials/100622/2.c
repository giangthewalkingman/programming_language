#include <stdio.h>
#include <math.h>
int main(){
    int x,y,z,t,P;
    char a= 'G';
    printf("x: tuoi bo\ny: tuoi me\nz: tuoi anh\nt: tuoi em\nP: tong so tuoi trong gia dinh\n");
    printf("nhap x=");
    scanf("%d",&x);
    printf("nhap y=");
    scanf("%d",&y);
    printf("nhap z=");
    scanf("%d",&z);
    printf("nhap t=");
    scanf("%d",&t);
    P=x+y+z+t;
    printf("P=%d%c", P, a);
    return 0;
}