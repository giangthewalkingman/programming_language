//bai tiep theo cua array
#include <stdio.h>
int main(){
    int randNumber[] = {33, 434, 3241, 424};
    randNumber[0] = 40;
    printf("%d",randNumber[0]);
    return 0;
}
//change the value of an array element
//now output is 40 instead of 33