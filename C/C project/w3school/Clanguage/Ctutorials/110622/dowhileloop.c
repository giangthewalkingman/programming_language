#include <stdio.h>
int main(){
    int i=-5;
    do{
        printf("i=%d\n",i);
        i++;
    }
    while(i>0 && i<1000);
}
//this loop means that code will be excuted at least once, and the condition "while..." will be executed after that