#include <stdio.h>
int main(){
    int i;
    for(i=0;i<10;i++){
        if(i==5){
            continue;
        }
        printf("anh se to tinh voi em %d lan\n",i);
    }
    return 0;
}