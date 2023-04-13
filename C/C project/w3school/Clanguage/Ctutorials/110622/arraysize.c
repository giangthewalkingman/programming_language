//this is how to set an array size
#include <stdio.h>
int main(){
    //first, set the array size, such as "4"
    int randNumber[4];
    //now, u can add elements:
    randNumber[0] = 2235;
    randNumber[1] = 23;
    randNumber[2] = 425;
    randNumber[3] = 99;
    int i=0;
    while(i<4){
        printf("so do la %d\n",randNumber[i]);
        i++;
    }
    return 0;
}