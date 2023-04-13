#include <stdio.h>
int main(){
    int x = 2,y = 3;
    int *ptr1 = &x,*ptr2 = &y;
    printf("Address and value of ptr1 before = %x %x \n",&ptr1, ptr1);
    printf("Address and value of ptr2 before = %x %x \n",&ptr2, ptr2);
    printf("Address and value of x before = %x %d \n\n",&x, x);
    //*ptr1 = *ptr2;//this cmd is just to assgin the value of x = value of y, but x address won't change;
    ptr1 = ptr2;//this cmd is just to assign the value of ptr1 to the value of ptr2, but the value of x won't change
    printf("Address and value of ptr1 after = %x %x \n",&ptr1, ptr1);
    printf("Address and value of ptr2 after = %x %x \n",&ptr2, ptr2);
    printf("Address and value of x after = %x %d \n",&x, x);
    ptr1 = NULL;
    ptr2 = NULL; 
}