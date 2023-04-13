#include <stdio.h>
void incre(int *v){
    (*v)+=3;
}
int main(){
    int a=5;
    incre(&a);
    printf("%d",a);
    return 0;
    
}