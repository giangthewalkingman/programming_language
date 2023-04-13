//reference
#include <stdio.h>
/*void hoan_vi(float x,float y)
{
	float z;
	z=x;
	x=y;
	y=z;

}
main()
{
float x,y;
x=9;y=10;
hoan_vi(x,y);
printf("x=%f,y=%f",x,y);
}
*/
void hoan_vi(float *px,float *py)
{
	float z;
	z=*px;
	*px=*py;
	*py=z;
}
int main()
{
	float a=9;float b=10;
	hoan_vi(&a,&b);
	printf("\na=%f,b=%f",a,b);
}
